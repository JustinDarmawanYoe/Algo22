#include <iostream>
using namespace std;

int main(){
	string nama,kamar;
	char sarapan;
	int jk,li,ts,total,jumlah;
	cout<<"Hotel Bahagia"<<endl;
	cout<<"-------------------"<<endl;
	cout<<"1. VVIP (1.000.000)"<<endl;
	cout<<"2. VIP (750.000)"<<endl;
	cout<<"3. Standard (500.000)"<<endl;
	cout<<"4. Melati (250.000)"<<endl;
	cout<<"--------------------"<<endl;
	cout<<"Masukkan Nama anda : ";cin>>nama;
	cout<<"Masukkan Jenis Kamar : ";cin>>jk;
	cout<<"Lama Inap : ";cin>>li;
	cout<<"Dengan Sarapan 50.000 per hari (y/n): ";cin>>sarapan;
	cout<<"---------------------"<<endl;
	switch(jk){
		case 1 : kamar="VVIP"; jumlah = (1000000 * li);break;
		case 2 : kamar="VIP"; jumlah = (750000 * li);break;
		case 3 : kamar="Standard"; jumlah = (500000 * li);break;
		case 4 : kamar="Melati"; jumlah = (250000 * li);break;
	}
	cout<<"Terima Kasih "<<nama<<endl;
	cout<<"Kamar Anda "<<kamar<<endl;
	if(sarapan == 'y'|| sarapan == 'Y'){
		ts = li * 50000;
		cout<<"Lama menginap "<<li<<" malam dengan sarapan"<<endl;
	} else {
		cout<<"Lama Menginap "<<li<<" malam"<<endl;
	} 
	total = jumlah + ts;
	cout<<"Total Bayar : "<<total;
	
	return 0;
}
