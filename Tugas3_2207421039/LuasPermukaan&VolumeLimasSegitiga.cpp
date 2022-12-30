#include <iostream>
using namespace std;

int main()
{
double t, Lalas, Lselubung;

	cout<<"Menghitung Volume dan Luas Permukaan Limas Segitiga!\n";
	cout<<"Masukkan tinggi sisi Limas : ";
		cin >>t;
	cout<<"Masukkan Luas Alas Limas : ";
		cin>>Lalas;
	cout<<"Masukkan Luas Selubung Limas : ";
		cin>>Lselubung;
			float V = (Lalas*t)/3;
	cout<<"\nVolume Limas Segitiga Tersebut adalah : "<<V;
			float LP = Lalas*Lselubung;
	cout<<"\nLuas Permukaan Limas Segiempat Tersebut adalah : "<<LP;
	return 0;
}

