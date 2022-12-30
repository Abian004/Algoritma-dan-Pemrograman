#include <iostream>
using namespace std;

int main()
{
double pi=3.14;
double r, t, Lalas, Kalas;

	cout<<"Menghitung Volume dan Luas Permukaan Tabung!\n";
	cout<<"Masukkan radius Tabung : ";
		cin>>r;
	cout<<"Masukkan tinggi Tabung : ";
		cin>>t;
	cout<<"Masukkan Luas alas Tabung : ";
		cin>>Lalas;
	cout<<"Masukkan Keliling alas Tabung : ";
		cin>>Kalas;
			float V = pi*r*r*t;
	cout<<"\nVolume Tabung tersebut adalah : "<<V;
			float LP = (2*Lalas)+(Kalas*t);
	cout<<"\nLuas Permukaan Tabung tersebut adalah : "<<LP;
	return 0;
}
	
