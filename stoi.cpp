#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
	
	string berat1, berat2;
	cout<<"Masukkan berat pertama";
		getline(cin, berat1);
	cout<<"Masukkan berat kedua";
		getline(cin, berat2);
	
	int num1 = stoi(berat1), 
	int num2 = stoi(berat2);
	
	int C = num1+num2;
	
	cout<<"Total beratnya adalah"<<C;
return 0;
	
}
