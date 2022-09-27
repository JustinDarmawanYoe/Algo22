#include <iostream>
using namespace std;

int main(){
	
	string pelanggan;
	string barang;
	int harga_barang;
	int total_harga_barang;
	double jumlah_beli;
	
	
	cout<<"Masukkan Nama Pelanggan : ";
	getline(cin,pelanggan);
	
	cout<<"Masukkan Nama Barang : ";
	getline(cin,barang);
	
	cout<<"Masukkan Harga Barang : "; cin>>harga_barang;
	
	cout<<"Masukkan Jumlah Beli : "; cin>>jumlah_beli;
	cout<<"----------"<<endl;
	
	cout<<"Barang yang anda beli adalah "<<barang<<endl;
	
	cout<<"Dengan Harga : "<<harga_barang<<endl;
	
	total_harga_barang = harga_barang * jumlah_beli;
	
	cout<<"Total bayar adalah "<<total_harga_barang<<endl;
	
	(total_harga_barang > 500000) ? (cout<<"Bonus : Payung")<<endl : (cout<<"Terima Kasih")<<endl;
	
	cout<<"Terima Kasih "<<pelanggan;
	
	return 0;
}
