#include <iostream>
using namespace std;
int main(){
	char huruf;
	cout<<"Masukkan Huruf : ";cin>>huruf;
	
	switch(huruf){
		case 'a': cout<<"a"; break;
		case 'b': cout<<"b"; break;
		case 'c': cout<<"c"; break;
		case 'd': cout<<"d"; break;
		case 'e': cout<<"e"; break;
		default : cout<<"Jawaban Salah";
	}
}
