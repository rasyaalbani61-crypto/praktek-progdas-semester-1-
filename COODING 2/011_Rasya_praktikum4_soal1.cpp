#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password, email;
    bool valid = true;

    cout << "Masukkan username: ";
    getline(cin, username);

   for (int i = 0; i < username.length(); i++)
    {
        if (username[i] >= 'A' && username [i] <= 'Z')
        {
            valid = false;
            cout << "USERNAME MEMILIKI HURUF BESAR!!!!!! " << endl;
            break;
        }
    }

    if (valid)
    {
        cout << "Masukkan password: ";
        getline(cin,password); 

        cout << "Masukkan email: ";
        getline(cin, email);

        cout << "Akun berhasil di buat!" << endl;
    }
    


    return 0;
}