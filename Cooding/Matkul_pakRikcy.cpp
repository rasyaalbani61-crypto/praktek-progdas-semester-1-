#include <iostream>
using namespace std;
const int JUM_DATA = 5;
int main ( ) { 
	double suhu[JUM_DATA], dTotal=0.0;

	cout << "Masukkan data suhu" << endl;
	for (int i = 0; i < JUM_DATA; i++){
		cout << i + 1 << " : ";
		cin >> suhu[i];
	}
	for (int i=0; i<JUM_DATA; i++)
		dTotal += suhu[i];	
	
	cout << "suhu rata-rata = " << dTotal / double(JUM_DATA) << endl;
   	return 0;   
}