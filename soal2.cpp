#include<iostream>
#include<iomanip>
using namespace std;

main() {
	
	for(int i = 1; i <= 10; i++) {
		for(int j = 1; j <= i; j++) {
			
			
			/*
				Keterangan fungsi setw()!
				setw() digunakan untuk menentukan panjang karakter dari cout
				
				setw(3) menandakan panjang setiap cout adalah 3 karakter,
				sehingga output menjadi rapi
			*/
			cout<<setw(3)<<i * j<<" ";
		}
		
		cout<<endl;
	}
}
