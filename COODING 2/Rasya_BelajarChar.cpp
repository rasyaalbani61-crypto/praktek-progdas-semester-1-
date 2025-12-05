#include <iostream>
using namespace std;

int main()
{
    string  X; // char hanya bisa menyimpan 1 huruf/angka/simbol/spasi saja,tidak lebih (atau juga bisa jadi pengelompkan dalam jumlah banyak)

    cout << "masukkan hurufff kecill : ";

    getline(cin, X);

    bool hasSpace = false,
         hasCapital = false,
         hasNumber = false,
         hasSymbol = false,
         hasLower = false ;

    for (char &c : X)
    {
        if (c >= '0' && c <= '9')
        {
            hasNumber = true;
            
        }
        else if (c >= 'A' && c <= 'Z')
        {
            hasCapital = true;
        }
        else if (c >= 'a' && c <= 'z')
        {
            hasLower = true;
        }
        else if (c >= '!' && c <= ')')
        {
            hasSymbol = true;
        } else if (c == ' ') {
             hasSpace = true;
        }
        
        
    }


     if (hasNumber)
        {
           
            cout << "itu adalah Angka" << endl;
        }
        if (hasCapital)
        {
            cout << "itu adalah Angka kapital" << endl;
        }
        if (hasLower)
        {
            cout << "nahhh betull itu adalah hurufff kecill" << endl;
        }
        if (hasSymbol)
        {
            cout << "itu adalah simbol" << endl;
        }
        if(hasSpace) {
            cout << "itu adalah spasi" << endl;

        }

    return 0;
}