#include <iostream>
using namespace std;

int main()
{
    string Kategori_buku;

    cout<< " Masukkan kategori buku :";
    cin>> Kategori_buku;
    
    if(Kategori_buku == "komputer"||Kategori_buku == "sains"||Kategori_buku == "ilmu"){
        cout<< " 000 komputer,sains, dan Ilmu \n";
        cout<< " 001 sains data \n";
        cout<< " 002 ilmu \n";
        cout<< " 003 proses data \n";
        cout<< " 004 pemrograman komputer, program, dan data \n";
    }else if(Kategori_buku == "fakta"|| Kategori_buku == "Ensiklopedia"){
        cout<< " 010 ensiklopedia, dan fakta \n";
        cout<< " 011 ensiklopedia umum \n";
        cout<< " 012 ensiklopedia Amerika \n";
        cout<< " 013 ensiklopedia jerman \n";
        cout<< " 014 ensiklopedia spanyol \n";
    }else if(Kategori_buku == "jurnalisme"|| Kategori_buku == "berita"){
        cout<< " 100 berita dan jurnalisme \n";
        cout<< " 101 koran amerika \n";
        cout<< " 102 koran british \n";
        cout<< " 103 koran eropa \n";
        cout<< " 104 koran italia \n";
    } else {
    cout<< "TIDAK ADA DI PERPUSTAKAAN"; 
    }

 return 0;

}