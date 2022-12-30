#include <iostream>
using namespace std;

int main()
{
int s;

	cout<<"Menghitung Volume dan Luas Permukaan Kubus!\n";
	cout<<"Masukkan panjang sisi Kubus : ";
		cin >>s;
			int Volume = s*s*s;
	cout<<"\nVolume Kubus Tersebut adalah : "<<Volume;
			int LuasPermukaan = 6*s*s;
	cout<<"\nLuas Permukaan Kubus Tersebut adalah : "<<LuasPermukaan;
	return 0;
}
