#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string huruf[2][5]{
	{"A", "B", "C", "D", "E"},
	{"F", "G", "H", "I", "J"}
	};
	
	for (int i = 0; i < 5; i++) {
  	cout<<huruf[0][i]<<" "<<huruf[1][i] << "\n";
	}

return 0;
}
