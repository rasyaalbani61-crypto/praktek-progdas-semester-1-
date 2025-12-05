#include <iostream>
using namespace std;

int main()
{

    string omMartin, sore;
    int i = 0, jumlahGame = 3, skorOmMartin = 0, skorSore = 0;
    bool imbang = false, omMartinMenang = false, soreMenang = false, selesai = false;

    while (!selesai)
    {

        cout << "om Martin : ";
        cin >> omMartin;
        cout << "sore : ";
        cin >> sore;

        if (omMartin == "gunting")
        {
            if (sore == "kertas")
            {
                omMartinMenang = true;
                skorOmMartin++;
            }
            else if (sore == "batu")
            {
                soreMenang = true;
                skorSore++;
            }
            else
            {
                imbang = true;
            }
        }
        else if (omMartin == "kertas")
        {
            if (sore == "batu")
            {
                omMartinMenang = true;
                skorOmMartin++;
            }
            else if (sore == "gunting")
            {
                soreMenang = true;
                skorSore++;
            }
            else
            {
                imbang = true;
            }
        }
        else if (omMartin == "batu")
        {
            if (sore == "gunting")
            {
                omMartinMenang = true;
                skorOmMartin++;
            }
            else if (sore == "kertas")
            {
                soreMenang = true;
                skorSore++;
            }
            else
            {
                imbang = true;
            }
        }

        if (omMartinMenang)
        {
            cout << "Om Martin menang!" << endl;
            omMartinMenang = false;
        }
        else if (soreMenang)
        {
            cout << "Sore menang!" << endl;
            soreMenang = false;
        }
        else if (imbang)
        {
            cout << "Hasil imbang!" << endl;
            imbang = false;
        }

        cout << "Om Martin  :" << skorOmMartin << endl;
        cout << "Sore     :" << skorSore << endl << endl;

        if (skorOmMartin == 2 || skorSore == 2)
        {
            selesai = true;
            cout << "Game Selesai.....";
            break;
        }

        i++;
    }

    return 0;
}