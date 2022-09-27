#include <iostream>
using namespace std;

int main(){
	float berat_badan_ideal;
	float tinggi_badan;
	
	cout<<"Program Mencari Berat Badan Ideal Laki-laki"<<endl;
	cout<<"Masukkan Tinggi Badan (dalam cm): "; cin>>tinggi_badan;
	
	berat_badan_ideal = (tinggi_badan - 100) - ((tinggi_badan - 100) * 10/100);
	
	cout<<"Berat badan idealnya adalah"<<berat_badan_ideal;
	
	return 0;
	
}
