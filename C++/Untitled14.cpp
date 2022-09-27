#include <iostream>
using namespace std;

int main(){
	
	string nama;
	string umur;
	string prodi;
	string matkul;
	
	cout<<"Masukkan Nama Anda : ";
	getline(cin,nama);
	cout<<"Masukkan Umur Anda : ";
	getline(cin,umur);
	cout<<"Masukkan Prodi Anda : ";
	getline(cin,prodi);
	cout<<"Mata Kuliah yang paling disukai : ";
	getline(cin,matkul);
	
	cout<<"Saya " <<nama;
	cout<<" umur "<<umur<<" tahun ";
	cout<<"dari prodi "<<prodi;
	cout<<" dengan ini menyatakan suka sekali mata kuliah "<<matkul;
	
	return 0;
}
