// hacker_rain.cpp
// Compile: g++ hacker_rain.cpp -O2 -std=c++11 -o hacker_rain
// Run: ./hacker_rain
#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <chrono>
#include <thread>
#include <csignal>
using namespace std;

int WIDTH = 100;   // ubah sesuai lebar terminalmu
int HEIGHT = 30;   // ubah sesuai tinggi terminalmu

volatile sig_atomic_t keep_running = 1;
void intHandler(int) { keep_running = 0; }

// ANSI helpers
const string ESC = "\033[";
const string CLEAR = ESC + "2J";
const string HIDE_CURSOR = ESC + "?25l";
const string SHOW_CURSOR = ESC + "?25h";
inline string moveTo(int r, int c){ return ESC + to_string(r) + ";" + to_string(c) + "H"; }
const string RESET = ESC + "0m";
const string BRIGHT_GREEN = ESC + "1;32m";
const string DIM_GREEN = ESC + "2;32m";
const string WHITE = ESC + "1;37m";

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    signal(SIGINT, intHandler);

    // karakter yang dipakai hujan (ganti untuk style lain)
    const string chars = "abbcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789@#$%&*()<>[]{}?/|\\";
    std::mt19937 rng((unsigned)chrono::high_resolution_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> dist_char(0, (int)chars.size() - 1);
    uniform_int_distribution<int> dist_speed(1, 5);
    uniform_int_distribution<int> dist_len(6, HEIGHT/2);

    // setiap kolom punya posisi, speed, dan panjang jejak
    int W = WIDTH;
    int H = HEIGHT;
    vector<int> head(W);
    vector<int> speed(W);
    vector<int> len(W);
    for (int i = 0; i < W; ++i){
        head[i] = rng() % H;
        speed[i] = dist_speed(rng);
        len[i] = dist_len(rng);
    }

    cout << CLEAR << HIDE_CURSOR;
    cout << moveTo(1,1);
    cout.flush();

    // buffer matriks char untuk menghindari flicker terlalu banyak
    vector<string> screen(H, string(W, ' '));
    vector<vector<int>> age(H, vector<int>(W, 0)); // umur untuk memudar

    const int FRAME_MS = 10; // atur untuk mempercepat/melambat

    while (keep_running){
        // update setiap 
        for (int col = 0; col < W; ++col){
            if (rng() % 100 < 2){ // kadang ubah speed/randomize
                speed[col] = dist_speed(rng);
                len[col] = dist_len(rng);
            }
            head[col] = (head[col] + speed[col]) % (H + len[col]); // biar ada jeda sebelum muncul lagi

            // buat kepala dan jejak
            for (int t = 0; t < len[col]; ++t){
                int row = head[col] - t;
                if (row >= 0 && row < H){
                    char c = chars[dist_char(rng)];
                    screen[row][col] = c;
                    age[row][col] = 0; // reset umur = segar
                }
            }
        }

        // aging / memudar
        for (int r = 0; r < H; ++r){
            for (int c = 0; c < W; ++c){
                // kalau kosong, beri sedikit aging
                if (screen[r][c] == ' '){
                    age[r][c] = min(age[r][c] + 1, 10);
                } else {
                    // isi jadi lebih tua tiap frame
                    age[r][c] = min(age[r][c] + 1, 10);
                    // kadang karakter berubah biar hidup
                    if (rng() % 10 == 0) screen[r][c] = chars[dist_char(rng)];
                    // setelah umur tertentu, biarkan kosong
                    if (age[r][c] > 8) screen[r][c] = ' ';
                }
            }
        }

        // render: print per baris memanfaatkan warna sesuai "umur"
        cout << moveTo(1,1);
        for (int r = 0; r < H; ++r){
            for (int c = 0; c < W; ++c){
                char ch = screen[r][c];
                if (ch == ' '){
                    cout << ' ';
                } else {
                    // kepala: yang paling segar (age small) jadi putih/cerah
                    if (age[r][c] <= 2){
                        cout << WHITE << ch << RESET;
                    } else if (age[r][c] <= 4){
                        cout << BRIGHT_GREEN << ch << RESET;
                    } else {
                        cout << DIM_GREEN << ch << RESET;
                    }
                }
            }
            cout << '\n';
        }
        cout.flush();

        this_thread::sleep_for(chrono::milliseconds(FRAME_MS));
    }

    // restore
    cout << SHOW_CURSOR << RESET << CLEAR << moveTo(1,1);
    cout.flush();
    return 0;
}
