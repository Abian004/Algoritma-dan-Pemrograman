#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	
	cout<<"Masukkan angka yang ingin anda cek : "; cin>>n;
	
	if(n%15 == 0){cout<<"Angka anda adalah FizzBuzz!";}
		else if(n%5 == 0 ){cout<<"Angka anda adalah Buzz!";}
		else if(n%3 == 0){cout<<"Angka anda adalah Fizz!";}
			else{cout<<"Angka anda bukanlah Fizz, Atau Buzz :(";}
}
