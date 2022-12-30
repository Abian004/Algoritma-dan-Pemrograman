#include <iostream>
using namespace std;

int main()
{
    char input, alphabet = 'A';

    cout<<"Masukkan huruf terakhir yang ingin anda ingin print secara kapital: ";
    	cin>>input;
	cout<<endl;
	
    for(int i = 1; i <= ('A'+1); ++i){
        for(int j = 1; j <= i; ++j){
            cout<<alphabet<<" ";
        }
        ++alphabet;
    cout<<endl;
    }
    return 0;
}