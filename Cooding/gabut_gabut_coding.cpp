#include <iostream>
using namespace std;

int main() {
    int raport = 10;

    if(raport < 50){
        cout << "maaf anda tidak lulus";
    }else if(raport <=70){
        cout << "anda lumayan pintar";
    }else{
        cout << "anda pintar";
    }
    return 0;
}