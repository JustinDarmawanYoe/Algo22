#include <iostream>
using namespace std;

int main(){
	double nilai;
	double uas;
	double uts;
	
	cout<<"Masukkan Nilai UTS anda : "; cin>>uts;
	cout<<"Masukkan Nilai UAS anda : "; cin>>uas;
	
	nilai = (uts + uas)/2;
	(nilai >=60) ? (cout<<"Lulus") : (cout<<"Tidak Lulus");
	
	return 0;
}
