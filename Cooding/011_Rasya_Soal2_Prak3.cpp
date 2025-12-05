#include <iostream>
using namespace std;

int main()
{

    int jumlah, ronaldo = 7, messi = 10, indeks = 1, siu = 0, batas = 3;

    cin >> jumlah;

    while (indeks <= jumlah)
    {

        if (indeks % ronaldo == 0)
        {
            siu++;
            cout << "SIUUUUU" << endl;
        }
        else if (indeks % messi == 0)
        {
            cout << "gaksiuuu" << endl;
        }
        else
        {
            cout << indeks << endl;
        }

        if (siu >= batas)
        {

            cout << endl << "Messi flop penalti, sembunyi Barca choke World Cup. Ronaldo GOAT monster fisik sundulan free kickBenci si pendek overrated—CR7 forever !" << endl; 

            break;
        }

        indeks++;
    }

    return 0;
}