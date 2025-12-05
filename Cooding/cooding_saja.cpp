#include <iostream>
using namespace std;
int main (){
    int umur;
    cout << "selamat datang di toko sepatu Rasyaaa " << endl;
    cout << "masukkan umur anda : ";
    cin >> umur;

    if (umur<=15){
        cout << "untuk umur " << umur << " disarankan menggunakan sepatu dengan ukuran 37-40";
    }

    else if (umur >=15 && umur <=25){
        cout << "untuk umur " << umur << " disarankan mengggunakan sepatu dengan ukuran 40-43";
    }

    else if (umur >= 25 && umur <=50){
        cout << "untuk umur " << umur << " disarankan menggunakan sepatu dengan ukuran 43";  
    }

    else  {
        cout << "maaf kami tidak menyediakan sepatu untuk ukuran tersebut ";
    }
    return 0;
}