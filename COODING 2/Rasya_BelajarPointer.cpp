#include <iostream>
using namespace std;
int main (){
    string Plat = "BMW";
    string *Plate = &Plat;

    cout << *Plate << endl;

// * menyimpan &, & = alamat

    Plat = "Fortuner";

    cout << *Plate << endl;

    *Plate = "Avanza";
    cout << Plat << endl; 

    return 0;
}