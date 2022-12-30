#include <iostream>
using namespace std;

int main()
{
double Lalas, Kalas, t, LalasSegitiga;

	cout<<"Menghitung Volume dan Luas Permukaan Prisma Segitiga!\n";
	cout<<"Masukkan Luas Alas : ";
	cin >>Lalas;
	cout<<"Masukkan Keliling Alas : ";
	cin >>Kalas;
	cout<<"Masukkan tinggi Prisma Segitiga : ";
	cin >>t;
	cout<<"Masukkan Luas Alas Segitiga : ";
	cin >>LalasSegitiga;
		double V = Lalas*t;
	cout<<"\nVolume Prisma Segitiga Tersebut adalah : "<<V;
		double LP = Kalas*t+2*LalasSegitiga;
	cout<<"\nLuas Permukaan Prisma Segitiga Tersebut adalah : "<<LP;
	return 0;
}
