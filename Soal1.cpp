#include<iostream>
#include<iomanip> //Library tambahan untuk menggunakan fungsi setw()
using namespace std;

main() 
{
	
	for(int i = 1; i <= 10; i++) {
		for(int j = 1; j <= 10; j++) {
			
			/*
				Keterangan fungsi setw()!
				setw() digunakan untuk menentukan panjang karakter dari cout
				
				setw(4) menandakan panjang setiap cout adalah 4 karakter,
				sehingga output tabel perkalian menjadi rapi
			*/
			cout<<setw(4)<<i * j;
		}
		
		cout<<endl;
	}
}
