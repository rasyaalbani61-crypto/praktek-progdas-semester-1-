#include <iostream>
using namespace std;
int pertambahan (int x, int y) {
    return x + y;
}
int pengurangan (int x, int y) {
    return x - y;
}
int perkalian (int x, int y) {
    return x * y;
}
int pembagian (int x, int y) {
    return x / y;
}

void log (int result) {
    cout << "hasilnya adalah " << result << endl;
}

    int main (){
        int tambah1 = pertambahan (9,9); //18
        int kurang1 = pengurangan (100, 50); //50
        int kali1 = perkalian (100, 100); //10000
        int bagi1 = pembagian (100, 5); //20
        log(tambah1);
        log(kurang1);
        log(kali1);
        log(bagi1);
        return 0;
    }