#include <iostream>
using namespace std;

int main()
{
	double A = 81, A1 = 76, B2 = 72, B = 68, B1 = 64, C2 = 60, C = 56, D = 41, E = 1;
	double sn;
	
	cout<<"Masukkan skala nilai anda! : "; cin>>sn;
	if (sn >= A){cout			<<	"Huruf mutu\t : A \nSebutan mutu\t : Sangat Istimewa \nAngka Mutu\t : 4";}
		else if (sn >= A1){cout	<<	"Huruf mutu\t : A- \nSebutan mutu\t : Istimewa \nAngka Mutu\t : 3.7";}
		else if (sn >= B2){cout	<<	"Huruf mutu\t : B+ \nSebutan mutu\t : Lebih dari Baik \nAngka Mutu\t : 3.3";}
		else if (sn >= B){cout	<<	"Huruf mutu\t : B \nSebutan mutu\t : Baik \nAngka Mutu\t : 3";}
		else if (sn >= B1){cout	<<	"Huruf mutu\t : B- \nSebutan mutu\t : Cukup Baik \nAngka Mutu\t : 2.7";}
		else if (sn >= C2){cout	<<	"Huruf mutu\t : C+ \nSebutan mutu\t : Lebih dari Cukup \nAngka Mutu\t : 2.3";}
		else if (sn >= C){cout	<<	"Huruf mutu\t : C \nSebutan mutu\t : Cukup \nAngka Mutu\t : 2";}
		else if (sn >= D){cout	<<	"Huruf mutu\t : D \nSebutan mutu\t : Kurang \nAngka Mutu\t : 1";}
			else{cout			<<	"Huruf mutu\t : E \nSebutan mutu\t : Gagal \nAngka Mutu\t : 0";}
}
