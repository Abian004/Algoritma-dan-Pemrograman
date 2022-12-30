#include <iostream>
#include <conio.h>
using namespace std;

int main(){
string repeat;

do{
	system("cls");
	
	double jenis, lama, karcis;
	
	cout<<"Tarif Parkir Progresif"<<endl;
	cout<<"Jumlah roda kendaraan anda : "; 
		cin>>jenis;
	cout<<"Berapa lama anda parkir \n(jika anda kehilangan karcis anda masukkan angka 0) : "; 
		cin>>lama;
	
	if(jenis <=2){
	double i = 25000, j = 3000;
		if(lama > 24){cout<<"Total Biaya karcis Anda adalah Rp. "<<i+j;}
		else if(lama == 24){cout<<"Total Biaya karcis Anda adalah Rp. 25.000"<<endl;}
		else{
			if(lama==0){cout<<"Anda harus membayar denda karena anda\nkehilangan karcis anda, dengan membayar Rp. 50.000"<<endl;}
			else{cout<<"Total Biaya karcis Anda adalah Rp. 3.000"<<endl;}
		}	}
	
	else if(jenis <= 4){
		double par4 = (lama-1)*2000+6000, i = 50, j = 2;
		if(lama > 24){cout<<"Total Biaya karcis Anda adalah Rp. "<<i+(lama-24)*j<<".000"<<endl;}
		else if(lama == 24){cout<<"Total Biaya karcis Anda adalah Rp. 50.000"<<endl;}
		else{
			if(lama==0){cout<<"Anda harus membayar denda karena anda\nkehilangan karcis anda, dengan membayar Rp. 100.000"<<endl;}
			else if(lama<2){cout<<"Total biaya karcis anda adalah Rp. 6.000"<<endl;}
			else if(lama<=5){cout<<"Total Biaya Karcis anda adalah Rp. "<<par4<<endl;}
			else if(lama<=12){cout<<"Total biaya karcis anda adalah Rp. 25.000"<<endl;}
			else{cout<<"Total biaya karcis anda adalah Rp. 55.000"<<endl;}
		}	}
	
	else if(jenis <= 6){
		double par6 = (lama-1)*3500+6000, i = 70, j = 3.5;
		if(lama > 24){cout<<"Total Biaya karcis Anda adalah Rp. "<<i+(lama-24)*j<<"000"<<endl;}
		else if(lama == 24){cout<<"Total Biaya karcis Anda adalah Rp. 70.000"<<endl;}
		else{
			if(lama==0){cout<<"Anda harus membayar denda karena anda\nkehilangan karcis anda, dengan membayar Rp. 100.000"<<endl;}
			else if(lama<2){cout<<"Total biaya karcis anda adalah Rp. 8.000"<<endl;}
			else if(lama<=5){cout<<"Total Biaya Karcis anda adalah Rp. "<<par6<<endl;}
			else if(lama<=12){cout<<"Total biaya karcis anda adalah Rp. 35.000"<<endl;}
			else{cout<<"Total biaya karcis anda adalah Rp. 70.000"<<endl;}
		}	}
		
	cout<<"Apakah anda ingin menghitung ulang? (y/n): ";
	cin>>repeat;
	}while (repeat=="y");
	cout<<"Pencet tombol apapun untuk kembali";
	getch();
	return 0;
}

