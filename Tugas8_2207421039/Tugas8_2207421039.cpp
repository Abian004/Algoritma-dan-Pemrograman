#include <iostream>
using namespace std;

int main(){

string repeat;

do{
	system("cls");
	
	int b1k1, b1k2, b1k3, b1k4, b1k5, b2k1, b2k2, b2k3, b2k4, b2k5, b3k1, b3k2, b3k3, b3k4, b3k5;
	
	cout<<"======================="<<endl;
	cout<<"Pembuatan Array Dinamis"<<endl;
	cout<<"======================="<<endl<<endl;
	
	cout<<"Didalam Array ini terdapat 3 baris dan 5 kolom"<<endl;
	cout<<"=============================================="<<endl<<endl;
	
	cout<<"Masukkan angka untuk Baris Pertama: "<<endl;
	cout<<"Kolom Pertama\t: ";
		cin>>b1k1;
	cout<<"Kolom Kedua\t: ";
		cin>>b1k2;
	cout<<"Kolom Ketiga\t: ";
		cin>>b1k3;
	cout<<"Kolom Keempat\t: ";
		cin>>b1k4;
	cout<<"Kolom Kelima\t: ";
		cin>>b1k5;
	cout<<endl;
	
	cout<<"Masukkan angka untuk Baris Kedua: "<<endl;
	cout<<"Kolom Pertama\t: ";
		cin>>b2k1;
	cout<<"Kolom Kedua\t: ";
		cin>>b2k2;
	cout<<"Kolom Ketiga\t: ";
		cin>>b2k3;
	cout<<"Kolom Keempat\t: ";
		cin>>b2k4;
	cout<<"Kolom Kelima\t: ";
		cin>>b2k5;
	cout<<endl;
	
	cout<<"Masukkan angka untuk Baris Ketiga: "<<endl;
	cout<<"Kolom Pertama\t: ";
		cin>>b3k1;
	cout<<"Kolom Kedua\t: ";
		cin>>b3k2;
	cout<<"Kolom Ketiga\t: ";
		cin>>b3k3;
	cout<<"Kolom Keempat\t: ";
		cin>>b3k4;
	cout<<"Kolom Kelima\t: ";
		cin>>b3k5;
	cout<<endl;
	
	int angka[3][5]{	
	{b1k1, b1k2, b1k3, b1k4, b1k5},
	{b2k1, b2k2, b2k3, b2k4, b2k5},
	{b3k1, b3k2, b3k3, b3k4, b3k5}
	};

	cout<<"Baris/Kolom\t1\t2\t3\t4\t5\tTotal"<<endl;
	cout<<"\t1";
	for (int i = 0; i < 5; i++)
	{	cout<<"\t"<<angka[0][i]<<" ";}
	int tb1=b1k1+b1k2+b1k3+b1k4+b1k5;
	cout<<"\t"<<tb1<<endl;
	
	cout<<"\t2";
	for (int i = 1; i < 5; i++)
	{cout<<"\t"<<angka[1][i]<<" ";}
	int tb2=b2k1+b2k2+b2k3+b2k4+b2k5;
	cout<<"\t"<<b2k5<<"\t"<<tb2<<endl;
	
	cout<<"\t3";
	for (int i = 2; i < 5; i++)
	{cout<<"\t"<<angka[2][i]<<" ";}
	int tb3=b3k1+b3k2+b3k3+b3k4+b3k5;
	cout<<"\t"<<b3k4<<"\t"<<b3k4<<"\t"<<tb3<<endl;
	
	int tk1=b1k1+b2k1+b3k1, tk2=b1k2+b2k2+b3k2, tk3=b1k3+b2k3+b3k3, tk4=b1k4+b2k4+b3k4, tk5=b1k5+b2k5+b3k5;
	int tsemua=tk1+tk2+tk3+tk4+tk5+tb1+tb2+tb3;
	cout<<"\tTotal\t"<<tk1<<"\t"<<tk2<<"\t"<<tk3<<"\t"<<tk4<<"\t"<<tk5<<"\t"<<tsemua;

	cout<<endl<<endl<<"Apakah anda ingin membuat array baru? (y/n): ";
		cin>>repeat;
	}while(repeat=="y");
	

return 0;
}