#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main(){
string repeat;

do{
	system("cls");
	
	int h, j, jr, p, r2=15, r4=25;
	
	cout<<"========================"<<endl;
	cout<<"Selamat Datang di Dufan!"<<endl;
	cout<<"========================"<<endl<<endl<<endl;
	
	cout<<"================="<<endl;
	cout<<"Tarif Masuk Dufan"<<endl;
	cout<<"================================================================================="<<endl;
	
	cout<<"Untuk WEEKDAY ketik angka 1, Untuk WEEKEND dan hari libur nasional, ketik angka 2"<<endl;
	cout<<"Hari anda akan berkunjung: ";cin>>h;
	cout<<"================================================================================="<<endl;
	cout<<"Untuk jenis kendaraan roda 2 ketik angka 1, untuk kendaraan roda 4, ketik angka 2"<<endl;
	cout<<"jenis kendaraan anda\t : ";cin>>jr;
	cout<<"================================================================================="<<endl;
	
	if (h == 1){
	cout<<"Pilih Paket Tiket Anda!"<<endl;
		cout<<"1. Annual pass dufan (e-card) + 1x kunjungan reguler ancol: Rp 350.000"<<endl;
		cout<<"2. Six months pass dufan (e-card) + 1x kunjungan reguler ancol: Rp 295.000"<<endl;
		cout<<"3. Weekday dufan + ancol bonus 1 produk sosro (Min. pembelian 4 tiket, berlaku kelipatan): Rp 185.000"<<endl;
		cout<<"4. Weekday dufan + ancol: Rp 250.000" <<endl;
		cout<<"5. Six months pass (e-card) + 1x kunjungan reguler ancol + weekday gondola: Rp 333.000"<<endl<<endl;	
		cout<<"Nomor Paket Tiket yang dipilih\t\t: ";cin>>p;
		cout<<"Jumlah Paket Tiket yang Anda Pilih\t: ";cin>>j;
		cout<<"======================================"<<endl;
		
		if (p == 1){	
			if (jr == 2){cout << "Harga tiket total: Rp "<<350*j + 15<<".000";}
			else if(jr == 4){cout << "Harga tiket total: Rp "<<350*j + 25<<".000";}
		}
		
		else if (p == 2){	
			if (jr == 2){cout << "Harga tiket total: Rp "<<295*j + 15<<".000";}
			else if(jr == 4){cout << "Harga tiket total: Rp "<<295*j + 25<<".000";}
		}
		
		else if (p == 3){	
			if (j < 4){cout<<"Minimal Pembelian Tiket Berjumlah 4!";}
			else if(j >= 4){
				if (jr == 2){cout << "Harga tiket total: Rp "<<185*j+ 15<<".000";}
				else if(jr == 4){cout << "Harga tiket total: Rp "<<185*j + 25<<".000";}}	
		}
		              
		else if (p == 4){	
			if (jr == 2){cout << "Harga tiket total: Rp "<<250*j + 15<<".000";}
			else if(jr == 4){cout << "Harga tiket total: Rp "<<250*j + 25<<".000";}
		}
		
		else if (p == 5){	
		if (jr == 2){cout << "Harga tiket total: Rp "<<333*j + 15<<".000";}
			else if(jr == 4){cout << "Harga tiket total: Rp "<<333*j + 25<<".000";}
		}
	}	
	
	else if(h == 2){
		cout<<"Pilih Paket Tiket Anda!"<<endl;
		cout<<"1. Annual Pass Dufan (Ecard) + 1x Kunjungan Reguler Ancol: Rp. 350.000"<<endl;
		cout<<"2. Six Months Pass Dufan (Ecard) + 1x Kunjungan Reguler Ancol: Rp. 295.000"<<endl;
		cout<<"3. Weekend Dufan + Ancol + Samdera: Rp. 315.000"<<endl;
		cout<<"4. Weekend Dufan + Ancol: Rp. 275.000"<<endl;
		cout<<"5. Weekend Dufan + Ancol + Gondola: Rp. 317.000"<<endl;
		cout<<"6. Weekend Dufan + Ancol Bonus 1 Produk Sosro (Min. Pembelian 4 tiket, berlaku kelipatan): Rp. 250.000"<<endl;
		cout<<"7. Six Months Pass Dufan (Ecard) = 1x Kunjungan Reguler Ancol + Weekend Gondola: Rp. 337.000"<<endl;
		cout<<"Nomor Paket Tiket yang dipilih\t\t: ";cin>>p;
		cout<<"Jumlah Paket Tiket yang Anda Pilih\t: ";cin>>j;
		cout<<"======================================"<<endl;
		
		if (p == 1){	
			if (jr == 2){cout << "Harga tiket total: Rp "<<350*j + 15<<".000";}
			else if(jr == 4){cout << "Harga tiket total: Rp "<<350*j + 25<<".000";}
		}
		
		else if (p == 2){	
			if (jr == 2){cout << "Harga tiket total: Rp "<<295*j + 15<<".000";}
			else if(jr == 4){cout << "Harga tiket total: Rp "<<295*j + 25<<".000";}
		}
		
		else if (p == 3){	
			if (jr == 2){cout << "Harga tiket total: Rp "<<315*j + 15<<".000";}
			else if(jr == 4){cout << "Harga tiket total: Rp "<<315*j + 25<<".000";}
		}
		
		else if (p == 4){	
			if (jr == 2){cout << "Harga tiket total: Rp "<<275*j + 15<<".000";}
			else if(jr == 4){cout << "Harga tiket total: Rp "<<275*j + 25<<".000";}
		}
		
		else if (p == 5){	
			if (jr == 2){cout << "Harga tiket total: Rp "<<317*j + 15<<".000";}
			else if(jr == 4){cout << "Harga tiket total: Rp "<<317*j + 25<<".000";}
		}
		
		else if (p == 6){	
			if (j < 4){cout<<"Minimal Pembelian Tiket Berjumlah 4!";}
			else if(j >= 4){
				if (jr == 2){cout << "Harga tiket total: Rp "<<250*j+ 15<<".000";}
				else if(jr == 4){cout << "Harga tiket total: Rp "<<250*j + 25<<".000";}}	
		}
		
		else if (p == 7){	
			if (jr == 2){cout << "Harga tiket total: Rp "<<337*j + 15<<".000";}
			else if(jr == 4){cout << "Harga tiket total: Rp "<<337*j + 25<<".000";}
		}
	}
	cout<<"\n(harga total sudah termasuk biaya parkir)"<<endl;
	cout<<"Apakah anda ingin menghitung ulang? (y/n): ";
	cin>>repeat;
	}while (repeat=="y");
	cout<<"Pencet tombol apapun untuk kembali";
	getch();
	return 0;
}
