#include <iostream>
using namespace std;

int main() {
    float a, b, hasil; //untuk hasil desimal sama dengan tipe data double
    char operasi; //untuk menympan 1 variabel, 'A' = untuk char, "A" = string
    char lanjut = 'y'; 


    while (lanjut == 'y') {
        cout << "=== KALKULATOR SEDERHANA ===" << endl;
        cout << "Pilih operator" << endl;
        cout << "1. + (Penjumlahan)" << endl;
        cout << "2. - (Pengurangan)" << endl;
        cout << "3. x (Perkalian)" << endl;
        cout << "4. : (Pembagian)" << endl;
        cout << "Masukkan pilihan operator (1/2/3/4): ";
        cin >> operasi;  
        
        if (operasi < '1' || operasi > '4') {
            cout << "Operator tidak valid!" << endl;
            continue;
        }

        cout << "Masukkan angka pertama: ";
        cin >> a;
        cout << "Masukkan angka kedua: ";
        cin >> b;

        char symbol;

        if (operasi == '1') {
            hasil = a + b;
            symbol = '+';
        } 
        else if (operasi == '2') {
            hasil = a - b;
            symbol = '-';
        } 
        else if (operasi == '3') {
            hasil = a * b;
            symbol = 'x';
        } 
        else if (operasi == '4') {
            if (b != 0) {
                cout << "Error: tidak bisa dibagi 0!" << endl;
                continue;
            }
            hasil = a / b;
            symbol = ':';
        }

        cout << "Hasil: " << a << " " << symbol << " " << b << " = " << hasil << endl;
        cout << "Apakah ingin Menghitung lagi?? " << endl;
        cout << "Ya/tidak: ";
        cin >> lanjut;
        cout << endl;
    }

    cout << "Program selesai. Terima kasih!" << endl;
    return 0;
}