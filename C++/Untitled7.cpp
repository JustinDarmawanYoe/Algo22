#include <iostream>
using namespace std;

int main(){
	const double pi = 3.14;
	double vol,r,t;
	
	cout<<"Program Mencari Volume Kerucut"<<endl;
	cout<<"Masukkan jari-jari: "; cin>>r;
	cout <<"Masukkan tinggi kerucut: "; cin>>t;
	
	vol = (pi * r * r * t)/3;
	
	cout<<"Volume Kerucut adalah: "<<vol;
	
	return 0;
}
