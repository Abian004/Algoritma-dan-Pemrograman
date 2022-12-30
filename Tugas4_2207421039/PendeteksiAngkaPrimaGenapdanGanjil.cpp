#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    int n, i, c = 0;
    
    cout << "Masukkan angka anda : "; cin>>n;
    
    for(i = 1; i <= n; i++){if (n % i == 0){c++;}}
    	if(c == 2 && n%2 == 0){cout << "Angka anda adalah angka prima dan genap" << endl;}
    		else if(c == 2 && n%2 != 0){cout << "Angka anda adalah angka prima dan ganjil" << endl;}
    		else if(c != 2 && n%2 == 0){cout << "Angka anda adalah angka genap dan bukan angka prima" << endl;}
    			else {cout << "Angka anda adalah angka ganjil dan bukan angka prima" << endl;}

    return 0;    
}
