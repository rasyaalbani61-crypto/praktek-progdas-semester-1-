#include <iostream>
using namespace std;
int main ( ) { 
	float suhu[5]; 	

	cout<<"Masukkan 5 buah data suhu"<<endl;
	for(int i=0; i<5; i++){
		cout << i + 1 << " : ";
		cin >> suhu[i];
	}

	cout<<"Data suhu yang Anda masukkan:"<<endl;
	for(int i=0; i<5; i++)
		cout << suhu[i] << endl;

   	return 0;   
}