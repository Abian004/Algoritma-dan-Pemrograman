#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int h, j, jr, p, r2=15, r4=25;
	
	cout<<"Selamat Datang di Dufan!\n\n";
	cout<<"Pada Hari Apakah Anda Akan Mengunjungi Dufan?\n(jika anda masuk pada hari kerja, masukkan angka ganjil,\njika anda masuk pada hari weekend atau libur nasional,\nmasukkan angka genap)";
	cout<<"\n\nHari Anda Masuk : ";
		cin>>h;
		
	if(h%2 != 0){
		cout<<"Pilih Paket Nomor Berapa yang Anda inginkan!\n\n\n";
		cout<<"1. Annual Pass Dufan (Ecard) + 1x Kunjungan Reguler Ancol: Rp. 350.000\n2. Six Months Pass Dufan (Ecard) + 1x Kunjungan Reguler Ancol: Rp. 295.000\n";
		cout<<"3. Weekday Dufan + Ancol Bonus 1 Produk Sosro (Min. Pembelian 4 tiket, berlaku kelipatan): Rp. 185.000\n4. Weekday Dufan + Ancol: Rp. 250.000\n";
		cout<<"5. Six Months Pass Dufan (Ecard + 1x Kunjungan Reguler Ancol + Weekday Gondola: Rp. 333.000";
		cout<<"\nNomor Paket Yang Anda Pilih\t\t\t: ";
			cin>>p;
		cout<<"Berapa Jumlah Paket Yang Anda Pilih\t\t: ";
			cin>>j;
		cout<<"Berapa Jumlah Roda Kendaraan Anda (Biaya Parkir Kendaraan Roda 2 adalah Rp. 15.000,\nSedangkan kendaraan lain adalah Rp. 25.000)\t: ";
			cin>>jr;
			
		if(jr > 2){
			if(p == 1){
			double bt = 350*j+r4;
			cout<<"Jumlah Biaya total yang harus anda bayar adalah: Rp. "<<bt<<".000";
			}
			
			else if(p == 2){
			double bt = 295*j+r4;
			cout<<"Jumlah Biaya total yang harus anda bayar adalah: Rp. "<<bt<<".000";
			}
			
			else if(p == 3){
				if(j < 4){cout<<"Minimal Jumlah Pembelian Tiket untuk Paket ini Adalah 4";}
				else if(j >= 4){double bt = 185*j+r4;cout<<"Jumlah Biaya total yang harus anda bayar adalah: Rp. "<<bt<<".000";}
			}
			
			else if(p == 4){
			double bt = 250*j+r4;
			cout<<"Jumlah Biaya total yang harus anda bayar adalah: Rp. "<<bt<<".000";
			}
			
			else if(p == 5){
			double bt = 333*j+r4;
			cout<<"Jumlah Biaya total yang harus anda bayar adalah: Rp. "<<bt<<".000";
			}
		}
		
		else if(jr <= 2){
			if(p == 1){
			double bt = 350*j+r2;
			cout<<"Jumlah Biaya total yang harus anda bayar adalah: Rp. "<<bt<<".000";
			}
			
			else if(p == 2){
			double bt = 295*j+r2;
			cout<<"Jumlah Biaya total yang harus anda bayar adalah: Rp. "<<bt<<".000";
			}
			
			else if(p == 3){
				if(j < 4){cout<<"Minimal Jumlah Pembelian Tiket untuk Paket ini Adalah 4";}
				else if(j >= 4){double bt = 185*j+r2;cout<<"Jumlah Biaya total yang harus anda bayar adalah: Rp. "<<bt<<".000";}
			}
			
			else if(p == 4){
			double bt = 250*j+r2;
			cout<<"Jumlah Biaya total yang harus anda bayar adalah: Rp. "<<bt<<".000";
			}
			
			else if(p == 5){
			double bt = 333*j+r2;
			cout<<"Jumlah Biaya total yang harus anda bayar adalah: Rp. "<<bt<<".000";
			}
		}
	}
	
	else if(h%2 == 0){
		cout<<"Pilih Paket Nomor Berapa yang Anda inginkan!\n";
		cout<<"1. Annual Pass Dufan (Ecard) + 1x Kunjungan Reguler Ancol: Rp. 350.000\n2. Six Months Pass Dufan (Ecard) + 1x Kunjungan Reguler Ancol: Rp. 295.000\n";
		cout<<"3. Weekend Dufan + Ancol + Samdera: Rp. 315.000\n4. Weekend Dufan + Ancol: Rp. 275.000\n5. Weekend Dufan + Ancol + Gondola: Rp. 317.000\n";
		cout<<"6. Weekend Dufan + Ancol Bonus 1 Produk Sosro (Min. Pembelian 4 tiket, berlaku kelipatan): Rp. 250.000\n7. Six Months Pass Dufan (Ecard) = 1x Kunjungan Reguler Ancol + Weekend Gondola: Rp. 337.000";
		cout<<"\nNomor Paket Yang Anda Pilih: ";
			cin>>p;
		cout<<"Berapa Jumlah Paket Yang Anda Pilih: ";
			cin>>j;
		cout<<"Berapa Jumlah Roda Kendaraan Anda (Biaya Parkir Kendaraan Roda 2 adalah Rp. 15.000, Sedangkan kendaraan lain adalah Rp. 25.000): ";
			cin>>jr;
			
		if(jr > 2){
			if(p == 1){
			double bt = 350*j+r4;
			cout<<"Jumlah Biaya total yang harus anda bayar adalah: Rp. "<<bt<<".000";
			}
			
			else if(p == 2){
			double bt = 295*j+r4;
			cout<<"Jumlah Biaya total yang harus anda bayar adalah: Rp. "<<bt<<".000";
			}
			
			else if(p == 3){
			double bt = 315*j+r4;
			cout<<"Jumlah Biaya total yang harus anda bayar adalah: Rp. "<<bt<<".000";
			}
			
			else if(p == 4){
			double bt = 250*j+r4;
			cout<<"Jumlah Biaya total yang harus anda bayar adalah: Rp. "<<bt<<".000";
			}
			
			else if(p == 5){
			double bt = 333*j+r4;
			cout<<"Jumlah Biaya total yang harus anda bayar adalah: Rp. "<<bt<<".000";
			}
			
			else if(p == 6){
				if(j < 4){cout<<"Minimal Jumlah Pembelian Tiket untuk Paket ini Adalah 4";}
				else if(j >= 4){double bt = 250*j+r4;cout<<"Jumlah Biaya total yang harus anda bayar adalah: Rp. "<<bt<<".000";}
			}
			
			else if(p == 7){
			double bt = 337*j+r4;
			cout<<"Jumlah Biaya total yang harus anda bayar adalah: Rp. "<<bt<<".000";
			}
		}
		
		else if(jr <= 2){
			if(p == 1){
			double bt = 350*j+r2;
			cout<<"Jumlah Biaya total yang harus anda bayar adalah: Rp. "<<bt<<".000";
			}
			
			else if(p == 2){
			double bt = 295*j+r2;
			cout<<"Jumlah Biaya total yang harus anda bayar adalah: Rp. "<<bt<<".000";
			}
			
			else if(p == 3){
			double bt = 315*j+r2;
			cout<<"Jumlah Biaya total yang harus anda bayar adalah: Rp. "<<bt<<".000";
			}
			
			else if(p == 4){
			double bt = 275*j+r2;
			cout<<"Jumlah Biaya total yang harus anda bayar adalah: Rp. "<<bt<<".000";
			}
			
			else if(p == 5){
			double bt = 317*j+r2;
			cout<<"Jumlah Biaya total yang harus anda bayar adalah: Rp. "<<bt<<".000";
			}
			
			else if(p == 6){
				if(j < 4){cout<<"Minimal Jumlah Pembelian Tiket untuk Paket ini Adalah 4";}
				else if(j >= 4){double bt = 250*j+r2;cout<<"Jumlah Biaya total yang harus anda bayar adalah: Rp. "<<bt<<".000";}
			}
			
			else if(p == 7){
			double bt = 337*j+r2;
			cout<<"Jumlah Biaya total yang harus anda bayar adalah: Rp. "<<bt<<".000";
			}
		}
	}
}
