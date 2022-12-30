#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	string repeat;
	
do{
	system("cls");
	
	double ob2 = 30, ob1 = 25, kbb = 23, normal = 18.5, kurbb = 18.5;
	double tinggi, berat;
	
	cout<<"Menghitung Body Mass index!"<<endl;
	cout<<"==========================="<<endl;
	cout<<"Masukkan tinggi badan anda (dalam skala meter)\t\t: ";
		cin>>tinggi;
	cout<<"Masukkan berat badan anda  (dalam skala kilogram)\t: ";
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
	cout<<"Pencet tombol apapun untuk kembali";
	getch();
}
