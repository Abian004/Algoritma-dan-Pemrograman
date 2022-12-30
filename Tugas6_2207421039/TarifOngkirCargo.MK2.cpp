#include <iostream>
#include <conio.h>
using namespace std;

int main(){
string repeat;

do{

	system("cls");
	
	int kt;
	double kgb, kgk, p, l, t;
	
	cout<<"========================="<<endl;
	cout<<"TARIF ONGKIR DAKOTA CARGO"<<endl;
	cout<<"========================="<<endl;
	
	cout<<"1. Jakarta\t4. Bandung\t7. Bekasi\t10.Cirebon"<<endl;
	cout<<"2. Denpasar\t5. Solo\t\t8. Surabaya"<<endl;
	cout<<"3. Yogyakarta\t6. Cianjur\t9. Tanggerang"<<endl<<endl;
	cout<<"Pilih Nomor Kota Tujuan Anda: ";
		cin>>kt;
	cout<<"=========================="<<endl;
	if(kt>10) {cout<<"Masukkan nomor yang sesuai"; 
		goto selesai;}
	else{
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
	
	switch (kt){
	case 1:
		cout<<"Untuk Kota Jakarta, biaya cargo untuk 20kg pertama adalah Rp. 29.000,"<<endl;
		cout<<"dan untuk biaya per kg selanjutnya adalah Rp. 1.450"<<endl<<endl;
		cout<<"=========================================="<<endl;
		cout<<"Berat volumetrik benda anda adalah "<<kg<<"kg"<<endl;
		if(kg<=20){cout<<"Total biaya cargo anda adalah Rp. 29.000"<<endl;}
		else if(kg>20){cout<<"Total biaya cargo anda adalah Rp. "<<29000+(kg-20)*1450<<endl;}
		cout<<"=========================================="<<endl;
	break;
	
	case 2:
		cout<<"Untuk Kota Denpasar, biaya cargo untuk 20kg pertama adalah Rp. 67.000,"<<endl;
		cout<<"dan untuk biaya per kg selanjutnya adalah Rp. 3.350"<<endl<<endl;
		cout<<"=========================================="<<endl;
		cout<<"Berat volumetrik benda anda adalah "<<kg<<"kg"<<endl;
		if(kg<=20){cout<<"Total biaya cargo anda adalah Rp. 67.000"<<endl;}
		else if(kg>20){cout<<"Total biaya cargo anda adalah Rp. "<<67000+(kg-20)*3350<<endl;}
		cout<<"=========================================="<<endl;
	break;
	
	case 3:
		cout<<"Untuk Kota Yogyakarta, biaya cargo untuk 20kg pertama adalah Rp. 41.000,"<<endl;
		cout<<"dan untuk biaya per kg selanjutnya adalah Rp. 2.050"<<endl<<endl;
		cout<<"=========================================="<<endl;
		cout<<"Berat volumetrik benda anda adalah "<<kg<<"kg"<<endl;
		if(kg<=20){cout<<"Total biaya cargo anda adalah Rp. 41.000"<<endl;}
		else if(kg>20){cout<<"Total biaya cargo anda adalah Rp. "<<41000+(kg-20)*2050<<endl;}
		cout<<"=========================================="<<endl;
	break;
	
	case 4:
		cout<<"Untuk Kota Bandung, biaya cargo untuk 20kg pertama adalah Rp. 24.000,"<<endl;
		cout<<"dan untuk biaya per kg selanjutnya adalah Rp. 2.900"<<endl<<endl;
		cout<<"=========================================="<<endl;
		cout<<"Berat volumetrik benda anda adalah "<<kg<<"kg"<<endl;
		if(kg<=20){cout<<"Total biaya cargo anda adalah Rp. 24.000"<<endl;}
		else if(kg>20){cout<<"Total biaya cargo anda adalah Rp. "<<24000+(kg-20)*2900<<endl;}
		cout<<"=========================================="<<endl;
	break;
	
	case 5:
		cout<<"Untuk Kota Solo, biaya cargo untuk 20kg pertama adalah Rp. 46.000,"<<endl;
		cout<<"dan untuk biaya per kg selanjutnya adalah Rp. 2.300"<<endl<<endl;
		cout<<"=========================================="<<endl;
		cout<<"Berat volumetrik benda anda adalah "<<kg<<"kg"<<endl;
		if(kg<=20){cout<<"Total biaya cargo anda adalah Rp. 46.000"<<endl;}
		else if(kg>20){cout<<"Total biaya cargo anda adalah Rp. "<<46000+(kg-20)*2300<<endl;}
		cout<<"=========================================="<<endl;
	break;
	
	case 6:
		cout<<"Untuk Kota Cianjur, biaya cargo untuk 20kg pertama adalah Rp. 28.000,"<<endl;
		cout<<"dan untuk biaya per kg selanjutnya adalah Rp. 1.400"<<endl<<endl;
		cout<<"=========================================="<<endl;
		cout<<"Berat volumetrik benda anda adalah "<<kg<<"kg"<<endl;
		if(kg<=20){cout<<"Total biaya cargo anda adalah Rp. 28.000"<<endl;}
		else if(kg>20){cout<<"Total biaya cargo anda adalah Rp. "<<28000+(kg-20)*1400<<endl;}
		cout<<"=========================================="<<endl;
	break;
	
	case 7:
		cout<<"Untuk Kota Bekasi, biaya cargo untuk 20kg pertama adalah Rp. 53.000,"<<endl;
		cout<<"dan untuk biaya per kg selanjutnya adalah Rp. 2.650"<<endl<<endl;
		cout<<"=========================================="<<endl;
		cout<<"Berat volumetrik benda anda adalah "<<kg<<"kg"<<endl;
		if(kg<=20){cout<<"Total biaya cargo anda adalah Rp. 53.000"<<endl;}
		else if(kg>20){cout<<"Total biaya cargo anda adalah Rp. "<<53000+(kg-20)*2650<<endl;}
		cout<<"=========================================="<<endl;
	break;
	
	case 8:
		cout<<"Untuk Kota Surabaya, biaya cargo untuk 20kg pertama adalah Rp. 54.000,"<<endl;
		cout<<"dan untuk biaya per kg selanjutnya adalah Rp. 2.700"<<endl<<endl;
		cout<<"=========================================="<<endl;
		cout<<"Berat volumetrik benda anda adalah "<<kg<<"kg"<<endl;
		if(kg<=20){cout<<"Total biaya cargo anda adalah Rp. 54.000"<<endl;}
		else if(kg>20){cout<<"Total biaya cargo anda adalah Rp. "<<54000+(kg-20)*2700<<endl;}
		cout<<"=========================================="<<endl;
	break;
	
	case 9:
		cout<<"Untuk Kota Tanggerang, biaya cargo untuk 20kg pertama adalah Rp. 53.000,"<<endl;
		cout<<"dan untuk biaya per kg selanjutnya adalah Rp. 2.650"<<endl<<endl;
		cout<<"=========================================="<<endl;
		cout<<"Berat volumetrik benda anda adalah "<<kg<<"kg"<<endl;
		if(kg<=20){cout<<"Total biaya cargo anda adalah Rp. 53.000"<<endl;}
		else if(kg>20){cout<<"Total biaya cargo anda adalah Rp. "<<53000+(kg-20)*2650<<endl;}
		cout<<"=========================================="<<endl;
	break;
	
	case 10:
		cout<<"Untuk Kota Cirebon, biaya cargo untuk 20kg pertama adalah Rp. 58.000,"<<endl;
		cout<<"dan untuk biaya per kg selanjutnya adalah Rp. 2.900"<<endl<<endl;
		cout<<"=========================================="<<endl;
		cout<<"Berat volumetrik benda anda adalah "<<kg<<"kg"<<endl;
		if(kg<=20){cout<<"Total biaya cargo anda adalah Rp. 58.000"<<endl;}
		else if(kg>20){cout<<"Total biaya cargo anda adalah Rp. "<<58000+(kg-20)*2900<<endl;}
		cout<<"=========================================="<<endl<<endl;
	break;
	}	}		
	
	selesai:
	cout<<endl<<"Apakah anda ingin menghitung ulang? (y/n): ";
		cin>>repeat;
	}
	
	while (repeat=="y");
	cout<<"Tekan tombol apapun untuk selesai";
	getch();
	return 0;
}
