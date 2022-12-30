#include <iostream>
#include <conio.h>
using namespace std;
    int data[1000], data2[1000];
    int n;

int main()
{
  	cout<<"ALGORITMA BUBBLE SORT"<<endl;
  	cout<<"----------------------"<<endl;
	cout<<"Masukan Jumlah Data = ";
		cin>>n;

cout<<endl;
    
    for (int i=0;i<n;i++){
    	cout<<"Masukan Data Ke-"<<i+1<<" = ";
    	cin>>data[i];
    	
    	data2[i]=data[i];
	}
	cout<<endl;	
	cout<<"Proses Bubble Sort"<<endl;
		for (int i=0;i<n;i++)
		{cout<<"["<<data[i]<<"] ";}
	
	cout<<endl;
	for (int i=1; i<n;i++){
		for (int j=n-1; j>=i;j--){
			if (data[j]<data[j-1]){
				int t;
			    t=data[j-1];
			    data[j-1]=data[j];
			    data[j]=t;
		}	}
		for (int i=0;i<n;i++)
		{cout<<"["<<data[i]<<"] ";}
	
	cout<<endl;
	}
	
	cout<<endl;
getch();
}