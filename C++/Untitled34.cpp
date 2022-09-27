#include <iostream>
using namespace std;

int main(){
	int uts,uas,tugas,nilai;
	string nama;
	
	cout<<"Masukkan Nama Anda : "; cin>>nama;
	cout<<"Masukkan Nilai Tugas : "; cin>>tugas;
	cout<<"Masukkan Nilai UTS : "; cin>>uts;
	cout<<"Masukkan Nilai UAS : "; cin>>uas;
	cout<<"-----------------------";
	cout<<endl;
	cout<<"Selamat "<<nama<<endl;
	nilai = (tugas+uts+uas)/3;
	cout<<"Nilai anda = "<<nilai<<endl;
	switch(nilai){
		case 0 ... 20 : cout<<"Nilai Huruf = E"<<endl;
			cout<<"Predikat = Sangat Kurang";break;
		case 21 ... 40 : cout<<"Nilai Huruf = D"<<endl;
			cout<<"Predikat = Kurang";break;
		case 41 ... 60 : cout<<"Nilai Huruf = C"<<endl;
			cout<<"Predikat = Cukup";break;
		case 61 ... 80 : cout<<"Nilai Huruf = B"<<endl;
			cout<<"Predikat = Baik";break;
		case 81 ... 100 : cout<<"Nilai Huruf = A"<<endl;
			cout<<"Predikat = Sangat Baik";break;
	}
	return 0;
}
