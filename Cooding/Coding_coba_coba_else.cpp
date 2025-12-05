#include <iostream>
using namespace std;

int main() {
    float nilai;

    cout << "Masukkan nilai Anda: ";
    cin >> nilai;

    if (nilai >= 75.5) {
        cout << "Selamat, Anda lulus!" << endl;
    } else {
        cout << "Maaf, Anda belum lulus." << endl;
    } 
    return 0; 
}