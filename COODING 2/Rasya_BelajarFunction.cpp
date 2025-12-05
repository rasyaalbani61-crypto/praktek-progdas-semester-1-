#include <iostream>
using namespace std;
int pertambahan (int x, int y){
    return x + y;
}
int perkalian (int x, int y){
    return x * y;
}
int pengurangan (int x, int y){
    return x - y;
}
int pembagian (int x, int y){
    return x / y;
}

void log (int result) {
    cout << "Hasilnya adalah " << result << endl;
}


int main (){
    int tambah = pertambahan (10, 18);
    int kali = perkalian (50, 10);
    int kurang = pengurangan (100,50);
    int bagi = pembagian (70, 10);
    
    log (tambah);
    log (kali);
    log (kurang);
    log (bagi);



    return 0;
}