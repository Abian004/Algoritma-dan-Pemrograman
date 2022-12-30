#include <iostream>
using namespace std;

int main()
{
	int i, angka;
	
	cout<<"Masukkan angka yang ingin anda cek : "; cin>>angka;
	for (int i = 1; i <= 100; i = i++)
	{
	if (angka % i == 0){cout<<"Composite";}
	else {cout<<"Prima";}
	exit(0);
	}
}
