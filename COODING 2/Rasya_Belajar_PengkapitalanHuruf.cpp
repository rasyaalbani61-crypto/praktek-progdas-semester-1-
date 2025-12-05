#include <iostream>
using namespace std;

string untuk (string inputan)
{
    string huruf;
    
    for (int i = 0; i < inputan.length(); i++)
    {

        if (inputan[i] != ' ')
        {
            inputan[i] = toupper(inputan[i]);
        }

        huruf += ' ';
        huruf += inputan[i];
    
    }

    return huruf;

}

int main ()
{
    cout << "masukkan huruf kecil : ";

    string inputan;
    getline (cin, inputan);

    cout << untuk(inputan) << endl;

    return 0;
}
