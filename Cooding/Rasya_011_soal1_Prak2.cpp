#include <iostream>
using namespace std;

int main() 
{  
    string email;
    string password;
    string password_1;
    string password_2;  

cout <<" Masukkan Email :";
cin >> email;
cout <<" Isien sek password e:";
cin >> password;
cout <<" Tenan pora jajal isien maneh pasword e :";
cin >> password_1;
if (password_1 == password) {
cout << " nang isien maneh wes terakhir:";
} else {
cout << " YAHAHAHAHAH AKUN E GAGAL SLURR SANDINE SALAH";
}
cin >> password_2;
if (password_2 == password) {
cout << "Anjaaayyyyyyyyy Pembuatan akun Berhasil";
} else {
cout << "YAHAHAHAHAH AKUN E GAGAL BLOK SANDINE SALAH";
} 

    return  0;
}