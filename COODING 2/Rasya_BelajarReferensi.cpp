#include <iostream>
using namespace std;
int main (){

    
    // referensi
    int ttl = 2006;
    int &ttl2 = ttl;

    cout << ttl2 << endl;

    ttl2 = 2007;

    cout << ttl << endl;




}