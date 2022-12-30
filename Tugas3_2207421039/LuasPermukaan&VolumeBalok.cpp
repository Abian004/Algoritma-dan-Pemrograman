#include <iostream>
using namespace std;

int main()
{
int p, l, t;

	cout<<"Menghitung Volume dan Luas Permukaan Balok!\n";
	cout<<"Masukkan panjang sisi Balok : ";
		cin >>p;
	cout<<"Masukkan lebar sisi Balok : ";
		cin >>l;
	cout<<"Masukkan tinggi sisi Balok : ";
		cin >>t;
			int V =p*l*t;
	cout<<"\nVolume Balok Tersebut adalah : "<<V;
			int LP = 2*(p*l+l*t+p*t);
	cout<<"\nLuas Permukaan Balok Tersebut adalah : "<<LP;
	return 0; 	
}
