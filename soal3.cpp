#include<iostream>
#include<iomanip> //Library tambahan untuk menggunakan fungsi setw()
using namespace std;

main() {
	int angka = 3;
	
	for(int i = 1; i <= 10; i++) {
		for(int j = 0; j < i; j++) {
			
			/*
				Keterangan fungsi setw()!
				setw() digunakan untuk menentukan panjang karakter dari cout
				
				setw(2) menandakan panjang setiap cout adalah 2 karakter,
				sehingga output menjadi rapi
			*/
			cout<<setw(2)<<angka + j<<" ";
		}
		
		cout<<endl;
		
		//Setiap selesai melooping kolom, tambah 2 nilai variabel angka
		angka += 2;
	}
}
