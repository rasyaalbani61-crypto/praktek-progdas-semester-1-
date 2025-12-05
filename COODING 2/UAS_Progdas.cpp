#include <iostream>
#include <cstring>
using namespace std;

struct Mahasiswa {
    char NIM[11];
    char nama[50];
    char gender[2];
    char alamat[100];
};

struct MataKuliah {
    string nama_matakuliah;
    int nilai_tugas;
    int nilai_uts; 
    int nilai_uas; 
};

struct Data {
    Mahasiswa identitas;
    MataKuliah nilai;
};

int main() {
    Data DataKe1;

    strcpy(DataKe1.identitas.NIM, "25051204011");
    strcpy(DataKe1.identitas.nama, "Albani Rasya");
    strcpy(DataKe1.identitas.gender, "L");
    strcpy(DataKe1.identitas.alamat, "Lamongan");

    DataKe1.nilai.nama_matakuliah = "Pemrograman Dasar";
    DataKe1.nilai.nilai_tugas = 90;
    DataKe1.nilai.nilai_uts = 91;
    DataKe1.nilai.nilai_uas = 95;

    cout << DataKe1.identitas.nama << endl;
    cout << DataKe1.nilai.nilai_uts << endl;

    return 0;
}