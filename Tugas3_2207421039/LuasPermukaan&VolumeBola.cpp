#include <iostream>
using namespace std;

int main()
{
double pi=3.14;
double r;

cout<<"Menghitung Volume dan Luas Permukaan Bola!\n";
	cout<<"Masukkan radius Bola : ";
		cin>>r;
			float V = (4*pi*r*r*r)/3;
	cout<<"\nVolume Bola tersebut adalah : "<<V;
			float LP = 4*pi*r*r;
	cout<<"\nLuas Permukaan Bola tersebut adalah : "<<LP;
	return 0;
}
