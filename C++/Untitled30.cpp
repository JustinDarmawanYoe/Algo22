#include <iostream>
using namespace std;

int main(){
	int u; cout<<"Input umur : ";cin>>u;
	string st,pr;
	switch(u) {
		case 1 ... 3: st="Batita";
		pr ="lagi lucu-lucunya";break;
		case 4 ... 5: st="Balita";
		pr="Masih lucu";break;
	}
	cout<<st<<endl<<pr<<endl;
}
