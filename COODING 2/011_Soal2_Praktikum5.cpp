#include <iostream>
using namespace std;

string untuk(string str)
{

    string vaporwaveStr;


    for (int i = 0; i < str.length(); i++)
    {
    
        if (str[i] != ' ') // [i] = indeks
        {
            str[i]= toupper(str[i]);
        }
        vaporwaveStr += ' ';
        vaporwaveStr += str[i];
    }

    return vaporwaveStr;

}

int main()
{

        cout << "Masukkan kalimat (dengan huruf kecil) : ";
    string str;
    getline(cin, str);

    cout << untuk(str) << endl;

    return 0;
}