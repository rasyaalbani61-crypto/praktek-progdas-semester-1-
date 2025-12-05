#include <iostream>
using namespace std;
int main()
{
    int x; // Tahun Lahir
    int y; // Tahun Ini
    cin >> x;
    cin >> y;
    int z = x-y; // Pengurangan Tahun
    cout << "Jikalau saya lahir di tahun " << x << 
    " dan tahun ini adalah tahun " << y << 
    ", maka umur saya sekarang ini adalah " << z << " tahun." << 
    endl; 
    return 0;

}