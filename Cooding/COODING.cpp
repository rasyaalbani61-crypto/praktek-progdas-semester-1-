#include <iostream>
using namespace std;

int main() {

int umur;
cin >> umur;
int hargaawal = 50000;

if (umur>17){ 
    cout << "diskon 0%" << endl ;
    cout << "potongan harga 0%" << endl ;
    cout << "harga yang harus dibayar 50000" << endl ;

}

 else if (umur >= 13 && umur <= 17) { // 13 - 17 tahun
        cout << "Diskon 25%" << endl;
        cout << "Potongan Rp 12500" << endl;
        cout << "Harga akhir Rp 37500" << endl;

 } 
 else if (umur >= 5 && umur <= 12) { // 5 - 12 tahun
        cout << "Diskon 50%" << endl;
        cout << "Potongan Rp 25000" << endl;
        cout << "Harga akhir Rp 25000" << endl;

 } 
 else if  (umur < 5) { // kurang dari 5 tahun
        cout << "Gratis" << endl;
        cout << "Potongan Rp 50000" << endl;
        cout << "Harga akhir Rp 0" << endl;
        cout << "Harga normal Rp 50000" << endl;
 }
  else { 
        cout << "Harga yang harus dibayar 0" << endl;
    }
    
    return 0;
}