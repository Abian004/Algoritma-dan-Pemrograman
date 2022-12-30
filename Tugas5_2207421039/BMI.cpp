#include <iostream>
using namespace std;

int main(){
	
	string repeat;
	
do{
	
	double ob2 = 30, ob1 = 25, kbb = 23, normal = 18.5, kurbb = 18.5;
	double tinggi, berat;
	
	cout<<"Menghitung Body Mass index!"<<endl;
	cout<<"Masukkan tinggi badan anda (dalam skala meter) : ";
		cin>>tinggi;
	cout<<"Masukkan berat badan anda : ";
		cin>>berat;
	double tb = berat/(tinggi*tinggi);
	
	if (tb > ob2){cout<<"Indeks Massa Tubuh anda adalah Obesitas Tingkat 2 ("<<tb<<")"<<endl;}
	else if (tb > ob1){cout<<"Indeks Massa Tubuh anda adalah Obesitas Tingkat 1 ("<<tb<<")"<<endl;}
		else if (tb > kbb){cout<<"Indeks Massa Tubuh anda adalah Kelebihan Berat Badan ("<<tb<<")"<<endl;}
		else if (tb > normal){cout<<"Indeks Massa Tubuh anda adalah Normal ("<<tb<<")"<<endl;}
			else {cout<<"Indeks Massa Tubuh anda adalah Kurang Berat Badan ("<<tb<<")"<<endl;}
	
	cout<<"Apakah anda ingin menghitung ulang? (y/n): "; 
	cin>>repeat;
	}while(repeat == "y");
}

