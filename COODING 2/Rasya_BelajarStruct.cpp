#include <iostream>
using namespace std;
int main () {
    struct {
        string MerkMobil;
        int PlatMobil;
        bool StatusStnk;
    } Mobil;

    // Mobil.MerkMobil = "BMW";
    // Mobil.PlatMobil = 9;
    // Mobil.StatusStnk = 0;

    cout << "Masukkan merek Mobil:";
    cin >> Mobil.MerkMobil;

    cout << "Masukkan angka plat mobil :";
    cin >> Mobil.PlatMobil;

    cout << "Masukkan status stnk : ";
    cin >> Mobil.StatusStnk;

    cout << "Nama Merk Mobilmu Adalah: " << Mobil.MerkMobil << endl;
    cout << "Nomor Plat Mobilmu Adalah: " << Mobil.PlatMobil << endl;
    
    
if (Mobil.StatusStnk == 1) {
    cout << "Status STNK mobil anda adalah Hidup" << endl;
} else if (Mobil.StatusStnk == 0) {
    cout << "Status STNK mobil anda adalah Mati" << endl;
}


return 0;
}