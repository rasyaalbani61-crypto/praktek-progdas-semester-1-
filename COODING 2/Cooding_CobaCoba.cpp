#include <iostream>
#include <string>

using namespace std;

int main () {
    string Bilangan, password,email;
    bool benar = true;
    cout << "masukkan namamu: ";
    getline(cin, Bilangan);
    
    for (int i = 0; i < Bilangan.length(); i++)
    {
        if (Bilangan[i] >= 'A' && Bilangan [i] <= 'Z')
        {
            benar = false;
            cout << "terdapat huruf besar!!!!" << endl;
            break;
        }
    }

    if (benar)
{
    cout << "masukkan password : ";
    getline (cin, password);

    cout << "masukkan email";
    getline (cin, email);

    cout << "selamat akun berhasil dibuat : ";
}
    return 0;
}