#include <iostream>
using namespace std;
int main(){
	string gender;
	double berat_badan_ideal,tinggi_badan;
	
	cout<<"Program Mencari Berat Badan Ideal Laki-laki dengan Rumus Broca"<<endl;
	cout<<"Masukkan Tinggi Badan(CM) : " ;cin>>tinggi_badan;
	
	if (gender = "L"){
	berat_badan_ideal = (tinggi_badan - 100) - ((tinggi_badan - 100) * 10/100);
}	else (gender = "P"){
	berat_badan_ideal = (tinggi_badan - 100) - ((tinggi_badan - 100) * 15/100);
}	 
	cout<<"Jadi Berat Badan Idealnya adalah: "<<berat_badan_ideal <<"KG";
	
	return 0;
}
