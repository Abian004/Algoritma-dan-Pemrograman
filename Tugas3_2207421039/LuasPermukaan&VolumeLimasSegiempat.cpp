#include <iostream>
using namespace std;

int main()
{
double p, l, t, Lalas, Lselubung;

	cout<<"Menghitung Volume dan Luas Permukaan Limas Segiempat!\n";
	cout<<"Masukkan panjang sisi Limas : ";
		cin >>p;
	cout<<"Masukkan lebar sisi Limas : ";
		cin >>l;
	cout<<"Masukkan tinggi sisi Limas : ";
		cin >>t;
	cout<<"Masukkan Luas Alas Limas : ";
		cin>>Lalas;
	cout<<"Masukkan Luas Selubung Limas : ";
		cin>>Lselubung;
			float V = (p*l*t)/3;
	cout<<"\nVolume Limas Segiempat Tersebut adalah : "<<V;
			double LP = Lalas*Lselubung;
	cout<<"\nLuas Permukaan Limas Segiempat Tersebut adalah : "<<LP;
	return 0;
}

