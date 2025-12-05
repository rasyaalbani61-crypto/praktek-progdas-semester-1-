#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Penghuni
{
    string nama_penghuninya;
    string tanggal_tinggal;
};

bool periksaDuplikasi(int jumlahRecording, Penghuni data[], string nama)
{
    for (int i = 0; i < jumlahRecording; i++)
    {
        if (data[i].nama_penghuninya == nama)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int jumlahRecording = 0;
    Penghuni data[100];

    ifstream FileData("logbook.txt", ios::in);

    if (FileData.is_open())
    {

        while (!FileData.eof() && jumlahRecording < 100)
        {
            string nama;
            string tanggal;

            getline(FileData, nama);
            getline(FileData, tanggal);

            if (nama != "" && tanggal != "")
            {
                data[jumlahRecording].nama_penghuninya = nama;
                data[jumlahRecording].tanggal_tinggal = tanggal;
                jumlahRecording++;
            }
        }
        FileData.close();
    }

    int n;
    cout << "Masukkan jumlah penghuni yang akan ditambahkan: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {

        string nama;
        string tanggal;

        cout << "Nama Penghuni : ";
        getline(cin, nama);
        cout << "Tanggal Mulai Tinggal (DD-MM-YYYY) : ";
        getline(cin, tanggal);

        if (periksaDuplikasi(jumlahRecording, data, nama))
        {
            cout << nama << " sudah terdaftar di LogBook, Tolong masukkan penghuni yang lainnya " << endl;
            i--;
            continue;
        }
        else
        {

            data[jumlahRecording].nama_penghuninya = nama;
            data[jumlahRecording].tanggal_tinggal = tanggal;
            jumlahRecording++;
            cout << nama << " Berhasil dicatat kedalam file LogBook " << endl;
        }

        cout << endl;
    }

    ofstream dataOutFile("logbook.txt", ios::out);
    if (dataOutFile.is_open())
    {
        for (int i = 0; i < jumlahRecording; i++)
        {
            dataOutFile << data[i].nama_penghuninya << endl;
            dataOutFile << data[i].tanggal_tinggal << endl;
        }
    }
    dataOutFile.close();

    return 0;
}