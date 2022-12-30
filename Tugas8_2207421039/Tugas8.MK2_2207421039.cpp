#include <iostream>
#include <array>
using namespace std;

int main(){
	
	int kolom, baris;
	
	cout<<"======================="<<endl;
	cout<<"Pembuatan Array Dinamis"<<endl;
	cout<<"======================="<<endl<<endl;
	
	cout<<"Berapa banyak Kolom dalam array anda? : ";
		cin>>kolom;
	cout<<"Berapa banyak Baris dalam array anda? : ";
		cin>>baris;
		
	for (int i = 0; i<=baris; i++){
		for (int j = 0; j<=kolom; j++){
				cout<<"  baris "<<i<<" kolom "<<j<<" = ";
				cin>>array[i][j];
	}	}
}