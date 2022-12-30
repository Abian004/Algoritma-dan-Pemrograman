#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
		string repeat;

do{
	system("cls");//cls digunakan untuk clear system
	
	string konfirm;
	int tiket, hari, umur, di, grup, jumlah, tsafari;//input dan variabel
	
	cout<<"========================"<<endl;
	cout<<"SAFARI TREK DAN OUTBOUND"<<endl;	
	cout<<"========================"<<endl<<endl;
	
	cout<<"Selamat Datang di Safari Trek dan Outbound"<<endl<<endl;
	cout<<"Untuk membeli Tiket Behind The Scene Tour, ketik 1"<<endl;
	cout<<"Untuk membeli Tiket Safari Trek dan Outbound, ketik 2: ";
		cin>>tiket;
	cout<<endl;
	
	if(tiket==1){//Bagian untuk pembelian tiket Behind The Scenes VVIP
	cout<<"==========================================="<<endl;
	cout<<"BEHIND THE SCENE TOUR VVIP Rp.1.000.000/pax"<<endl;
	cout<<"==========================================="<<endl;
	cout<<"========================================================================="<<endl;
	cout<<"FASILITAS"<<endl;
	cout<<"-Mengunjungi Rumah Sakit Satwa\t -Ruang Nursery"<<endl;
	cout<<"-Exhibit Area\t\t\t -Pusat Penangkaran Gajah"<<endl;
	cout<<"-Genome Resource Bank\t\t -Safari Journey (Pemandu + Tiket)"<<endl; 
	cout<<"-Terusan Panda\t-Pusat Penangkaran Harimau\t-Ruang Pathologi"<<endl;
	cout<<"========================================================================="<<endl;
	cout<<"===================="<<endl;
	cout<<"SYARAT DAN KETENTUAN"<<endl;
	cout<<"===================="<<endl;
	cout<<"-Hanya berlaku hari Senin-Jum'at"<<endl; 
	cout<<"-Minimal 5 pax dan maksimal 15 pax"<<endl; 
	cout<<"-Harus melakukan reservasi & deposit terlebih dahulu"<<endl<<endl;
	cout<<"Apakah anda sudah melengkapi ketentuan diatas? (y/n): ";
		cin>>konfirm;
		if(konfirm=="y"){
		cout<<"Berapa jumlah yang akan membeli tiket: ";
			cin>>jumlah;
		if(jumlah<5 || jumlah>15){
			cout<<"Anda tidak mengikuti ketentuan yang diterapkan";}
		else if(jumlah>=5 && jumlah<=15){
		int ttiket = 1000000*jumlah;	
		cout<<"Jumlah biaya yang harus anda bayar adalah Rp. "<<ttiket<<",-";}
		}
	}	
	
	else if(tiket==2){
	cout<<"Apakah anda datang secara grup?\n(jika datang secara grup masukkan angka 1, jika tidak masukkan angka 2): ";
		cin>>grup;
	cout<<endl;
	
	if(grup==1){
	cout<<"Group: Rp.150.000/Orang"<<endl;
	cout<<"Berapa jumlah pengunjung di dalam grup anda: ";
		cin>>jumlah;
		if(jumlah>=25){
	int ttiket = jumlah*150000;
	cout<<"Berlaku Weekend, weekdays, & Public Holiday"<<endl<<endl<<endl;
	cout<<"Total harga tiket anda adalah Rp. "<<ttiket<<",-";}
		else if(jumlah<25){
	cout<<"Minimal jumlah pengunjung untuk pembelian tiket grup adalah adalah 25 orang";}
	}
	
	else if(grup==2){
	cout<<"HARGA TiKET MASUK SAFARI TREK DAN OUTBOUND"<<endl;
	cout<<"WEEKDAY\t\t\t\t\tWEEKEND & HOLIDAY"<<endl;
	cout<<"Domestic\t\t\t\tDomestic"<<endl;
	cout<<"> 6 Tahun Rp. 230.000,-\t\t\t> 6 Tahun Rp. 255.000,-"<<endl;
	cout<<"< 5 Tahun RP. 200.000;-\t\t\t< 5 Tahun Rp. 225.000,-"<<endl<<endl;
	cout<<"International\t\t\t\tInternational"<<endl;
	cout<<"> 6 Tahun Rp. 400.000,-\t\t\t> 6 Tahun Rp. 400.000,-"<<endl;
	cout<<"< 5 Tahun Rp. 350.000,-\t\t\t< 5 Tahun Rp. 350.000,-"<<endl<<endl;
	
	cout<<"HARGA TiKET MASUK SAFARI MALAM"<<endl;
	cout<<"Domestic\t\t\t\tInternational"<<endl;
	cout<<"> 6 Tahun Rp. 180.000,-\t\t\t> 6 Tahun Rp. 350.000,-"<<endl;
	cout<<"< 5 Tahun Rp. 160.000,-\t\t\t< 5 Tahun Rp. 300.000,-"<<endl<<endl;
	cout<<"Untuk membeli tiket Safari Trek dan Outbound, tekan angka 1"<<endl;
	cout<<"Untuk membeli tiket Safari Malam, tekan angka 2: ";
	cin>>tsafari;
	cout<<endl;
	
	switch(tsafari){
		case 1:
		cout<<"Pada hari apa anda berkunjung?"<<endl;
		cout<<"(jika weekdays, masukkan angka 1, jika weekend dan libur nasional,\n masukkan angka 2): ";
			cin>>hari;
		cout<<endl;
		cout<<"Apakah anda pengunjung domestic atau international?\n(jika domestic, masukkan angka 1, jika international, masukkan angka 2): ";
			cin>>di;
		cout<<endl;
		cout<<"Berapa umur anda: ";
			cin>>umur;
		cout<<"Jumlah pengunjung: ";
			cin>>jumlah;
	
			if(hari==1 && di==1 && umur<=5){
			int tarif = 200000*jumlah;
				cout<<"Total Harga Tiket Masuk Anda adalah Rp. "<<tarif<<",-"<<endl;}
			
			else if(hari==1 && di==1 && umur>=6){
			int tarif = 230000*jumlah;
				cout<<"Total Harga Tiket Masuk Anda adalah Rp. "<<tarif<<",-"<<endl;}
			
			else if(hari==1 && di==2 && umur<=5){
			int tarif = 350000*jumlah;
				cout<<"Total Harga Tiket Masuk Anda adalah Rp. "<<tarif<<",-"<<endl;}
			
			else if(hari==1 && di==2 && umur>=6){
			int tarif = 400000*jumlah;
				cout<<"Total Harga Tiket Masuk Anda adalah Rp. "<<tarif<<",-"<<endl;}
			
			else if(hari==2 && di==1 && umur<=5){
			int tarif = 225000*jumlah;
				cout<<"Total Harga Tiket Masuk Anda adalah Rp. "<<tarif<<",-"<<endl;}
			
			else if(hari==2 && di==1 && umur>=6){
			int tarif = 250000*jumlah;
				cout<<"Total Harga Tiket Masuk Anda adalah Rp. "<<tarif<<",-"<<endl;}
			
			else if(hari==2 && di==2 && umur<=5){
			int tarif = 350000*jumlah;
				cout<<"Total Harga Tiket Masuk Anda adalah Rp. "<<tarif<<",-"<<endl;}
			
			else if(hari==2 && di==2 && umur>=6){
			int tarif = 400000*jumlah;
				cout<<"Total Harga Tiket Masuk Anda adalah Rp. "<<tarif<<",-"<<endl;}
		break;
		
		case 2:
		cout<<"Apakah anda pengunjung domestic atau international?\n(jika domestic, masukkan angka 1, jika international, masukkan angka 2): ";
			cin>>di;
		cout<<endl;
		cout<<"Berapa umur anda: ";
			cin>>umur;
		cout<<"Jumlah pengunjung: ";
			cin>>jumlah;
			
			if(di==1 && umur<=5){
			int tarif = 160000*jumlah;
				cout<<"Total Harga Tiket Masuk Anda adalah Rp. "<<tarif<<",-"<<endl;}
			
			else if(di==1 && umur>=6){
			int tarif = 280000*jumlah;
				cout<<"Total Harga Tiket Masuk Anda adalah Rp. "<<tarif<<",-"<<endl;}
				
			else if(di==2 && umur<=5){
			int tarif = 300000*jumlah;
				cout<<"Total Harga Tiket Masuk Anda adalah Rp. "<<tarif<<",-"<<endl;}
			
			else if(di==2 && umur>=6){
			int tarif = 350000*jumlah;
				cout<<"Total Harga Tiket Masuk Anda adalah Rp. "<<tarif<<",-"<<endl;}
		break;	
		
				}	
			}	
		}
		cout<<endl<<endl<<"Apakah anda ingin menghitung ulang? (y/n): ";
			cin>>repeat;
	}
	
	while (repeat=="y");
	cout<<"Tekan tombol apapun untuk selesai";
	return 0;
}
