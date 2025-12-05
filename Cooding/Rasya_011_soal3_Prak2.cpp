#include <iostream>
using namespace std;
int main()
{
    // 2   ngitung satuan n % 10
    
    //81  satuan puluhan   n % 100 / 10
    
    //889 satuan puluhan ratusan

    // satuan puluhan ratusan 
  
    //889
    //  9 satuan
    // 8 puluhan
    // 8 ratusan
    int n;
    cin >> n;

    if(n>=0 && n<1000) {

        // operasi utama 
        int satuan, puluhan, ratusan, hasil;

        //81
        satuan = n%10;

        if(satuan != 0) {
            
            puluhan = n % 100/ 10;


            if (puluhan != 0) {

                ratusan = n /100;

                if(ratusan != 0) {
                    int simpan = satuan + puluhan + ratusan;
                    if (simpan >= 10) {
                        hasil = (simpan % 10) + (simpan % 100/ 10);
                    } else {
                        hasil = simpan;
                    }
                } 
                else {
                    hasil = satuan + puluhan;
                }
            } else {
                 hasil = satuan;
            }
        }


        cout << hasil;



    } else {
        cout << "Inputan maksimal 3 Digit ! dan tidak boleh 0";
    }

}