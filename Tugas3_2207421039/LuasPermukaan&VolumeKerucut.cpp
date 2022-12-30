#include <iostream>
using namespace std;

int main()
{
double pi=3.14;
double r, t, s; //s adalah Garis pelukis

cout<<"Menghitung Volume dan Luas Permukaan Kerucut!\n";
	cout<<"Masukkan radius Kerucut : ";
		cin>>r;
	cout<<"Masukkan tinggi Kerucut : ";
		cin>>t;
	cout<<"Masukkan Garis pelukis Kerucu : ";
		cin>>s;
			float V = (pi*r*r*t)/3;
	cout<<"\nVolume Kerucut tersebut adalah : "<<V;
			float LP = (pi*r*r)+(pi*r*s);
	cout<<"\nLuas Permukaan Kerucut tersebut adalah : "<<LP;
	return 0;
}
