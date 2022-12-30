#include <iostream>
using namespace std;

int main()
{
string nama, nim, ttl, gd, alamat, notelp, agama, sp, kerja, kewarga, tdd;

	cout<<"Masukkan data anda untuk menjadi biodata!";
	cout<<"\n\tNama\t\t\t : ";
		getline(cin, nama);
	cout<<"\tNIM\t\t\t : ";
		getline(cin, nim);
	cout<<"\tTempat Tanggal Lahir\t : ";
		getline(cin, ttl);
	cout<<"\tGol Darah\t\t : ";
		getline(cin, gd);
	cout<<"\tAlamat\t\t\t : ";
		getline(cin, alamat);
	cout<<"\tAgama\t\t\t : ";
		getline(cin, agama);
	cout<<"\tStatus Perkawinan\t : ";
		getline(cin, sp);
	cout<<"\tPekerjaan\t\t : ";
		getline(cin, kerja);
	cout<<"\tKewarganegaraan\t\t : ";
		getline(cin,kewarga);
	cout<<"\tNomor Telepon\t\t : ";
		getline(cin, notelp);
	cout<<"Kapan Dokumen ini ditulis?\t : ";
		getline(cin, tdd);
	cout<<"____________________________________________________________________________________________________\n";
	
	
	cout<<"\n\tNama\t\t\t : "<<nama;
	cout<<"\n\tNIM\t\t\t : "<<nim;
	cout<<"\n\tTempat Tanggal Lahir\t : "<<ttl;
	cout<<"\n\tGol Darah\t\t : "<<gd;
	cout<<"\n\tAlamat\t\t\t : "<<alamat;
	cout<<"\n\tAgama\t\t\t : "<<agama;
	cout<<"\n\tStatus Perkawinan\t : "<<sp;
	cout<<"\n\tPekerjaan\t\t : "<<kerja;
	cout<<"\n\tKewarganegaraan\t\t : "<<kewarga;
	cout<<"\n\tNomor Telepon\t\t : "<<notelp;
	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t"<<tdd;
	cout<<"\n\t\t\t\t\t\t\t\t\t\tYang bertanda tangan\n\n\n\n\n\n";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t"<<nama;
	return 0;
}
