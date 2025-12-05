#include <iostream>
#include <string>
using namespace std;

 int main () {
     string nama;
     cout << "masukkan nama kamu :";
     getline (cin, nama);
     cout << "nama kamu adalah : " << nama << endl;
     return 0;
}



int main () {
    char ras[5];
    cout << "masukkan angka : ";
    cin.getline(ras, 5);
    cout << "jadi pilihanmu adalah : " << ras << endl;
    return 0;
}