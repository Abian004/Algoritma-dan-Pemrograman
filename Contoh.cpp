#include <iostream>
#include <conio.h>
using namespace std;

int main(){
string repeat;

do{

	system("cls");
	
	double kt, kg, kgb, kgk, p, l, t;
	
	cout<<"========================="<<endl;
	cout<<"TARIF ONGKIR DAKOTA CARGO"<<endl;
	cout<<"========================="<<endl;
	
	cout<<"1. Jakarta\t4. Bandung\t7. Bekasi\t\t10.Cirebon"<<endl;
	cout<<"2. Denpasar\t5. Solo\t\t8. Surabaya"<<endl;
	cout<<"3. Yogyakarta\t6. Cianjur\t9. Tanggerang"<<endl<<endl;
	cout<<"Pilih Kota Tujuan Anda: ";
		cin>>kt;
	cout<<"=========================="<<endl;
		
	if(kt==1){
		cout<<"Untuk Kota Jakarta, biaya cargo untuk 20kg pertama adalah Rp. 29.000,"<<endl;
		cout<<"dan untuk biaya per kg selanjutnya adalah Rp. 1.450"<<endl;
		cout<<"Berapa berat cargo yang anda ingin kirim?"<<endl;
		cout<<"(dalam satuan kilogram) : ";
			cin>>kgk;
		cout<<"Panjang benda anda (dalam satuan cm): ";
			cin>>p;
		cout<<"Tinggi benda anda (dalam satuan cm): ";
			cin>>t;
		cout<<"Lebar benda anda (dalam satuan cm): ";
			cin>>l;
		cout<<endl;
		int kg = p*l*t/4000;
		cout<<"=========================================="<<endl;
		cout<<"Berat volumetrik benda anda adalah "<<kg<<"kg"<<endl;
		if(kg<=20){cout<<"Total biaya cargo anda adalah Rp. 29.000"<<endl;}
		else if(kg>20){cout<<"Total biaya cargo anda adalah Rp. "<<29000+(kg-20)*1450<<endl;}
		cout<<"=========================================="<<endl;
	}

	cout<<endl<<"Apakah anda ingin menghitung ulang? (y/n): ";
		cin>>repeat;
	}while (repeat=="y");
	cout<<"Tekan tombol apapun untuk selesai";
	getch();
	return 0;
}
