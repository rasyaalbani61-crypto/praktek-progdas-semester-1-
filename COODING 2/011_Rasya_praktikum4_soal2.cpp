#include <iostream>
using namespace std;

int main()
{
    int angka[7];
    cout << "Masukkan 7 angka dengan spasi tiap tiap angka!! : ";
    for (int i = 0; i < 7; i++)
    {
        cin >> angka[i];
    }

    cout << "Urutan yang asli : ";

    for (int a = 0; a < 7; a++)
    {
        cout << angka[a] << " ";
    }

    cout << endl;

    cout << "Urutan yang terbalik : ";
    for (int n = 6; n >= 0; n--)
    {
        cout << angka[n] << " ";
    }

    return 0;
}