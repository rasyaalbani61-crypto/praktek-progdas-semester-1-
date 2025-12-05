#include <iostream> 
using namespace std;

int MenghitungKarakter (string *masukkan)
{
    int totalKarakter = 0;
    for (int i = 0; i < masukkan->length(); i++)
    {
        if (masukkan->at(i) != ' ')
        {
            totalKarakter++;
        }
    }
    return totalKarakter;
}

int main()
{
    string masukkan;
    cout << "Masukkan Kata : ";
    getline(cin, masukkan);

    cout << "Jumlah Kata : " << MenghitungKarakter(&masukkan);

    return 0;
}