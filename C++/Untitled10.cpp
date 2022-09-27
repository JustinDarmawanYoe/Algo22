#include <iostream>
using namespace std;

 int main(){
 	double kalori_yang_dibutuhkan,berat_badan,tinggi_badan,usia;
 	
 	cout<<"Program Menghitung Kebutuhan Kalori Laki-laki"<<endl;
 	
 	cout<<"Masukkan Berat Badan: "; cin>>berat_badan;
 	cout<<"Masukkan Tinggi Badan: "; cin>>tinggi_badan;
 	cout<<"Masukkan Usia: "; cin>>usia;
 	
 	kalori_yang_dibutuhkan = (88.4 + (13.4 * berat_badan)) + (4.8 * tinggi_badan) - (5.68 * usia);
 	
 	cout<<"Kalori yang dibutuhkan adalah:" <<kalori_yang_dibutuhkan<<"kkal";
 }
 
