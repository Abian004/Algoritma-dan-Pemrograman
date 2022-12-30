#include <iostream>
#include <string>
using namespace std;

void nama(string fname) 
{cout<<"Nama\t\t\t: "<<fname<<endl;}

void tempattl(string ttl) 
{cout<<"Tempat/Tanggal Lahir\t: "<<ttl<<endl;}

void jkelamin(string kelamin) 
{cout<<"Jenis Kelamin\t\t: "<<kelamin<<endl;}

void alamat(string alamat) 
{cout<<"Alamat\t\t\t: "<<alamat<<endl;}
	void artrw(string rtrw) 
	{cout<<"\tRT/RW\t\t\t: "<<rtrw<<endl;}
	void keldes(string kdesa) 
	{cout<<"\tKel/Desa\t\t: "<<kdesa<<endl;}
	void kecamatan(string kec) 
	{cout<<"\tKecamatan\t\t: "<<kec<<endl;}

void agama(string agama)
{cout<<"Agama\t\t\t: "<<agama<<endl;}

void skawin(string kawin)
{cout<<"Status Perkawinan\t: "<<kawin<<endl;}

void kerja(string kerja)
{cout<<"Pekerjaan\t\t: "<<kerja<<endl;}

void kwg(string warganegara)
{cout<<"Kewarganegaraan\t\t: "<<warganegara<<endl;}

void berlaku(string berlaku)
{cout<<"Berlaku Hingga\t\t: "<<berlaku<<endl;}
	
int main() {
  nama("GUOHUI CHEN");
  tempattl("Fujian, 25-03-1977");
  jkelamin("Laki-laki");
  alamat("Jl. Selamet Perumahan Rancabali No. 40");
  artrw("002/004");
  keldes("Muka");
  kecamatan("Cianjur");
  agama("Christian");
  skawin("Married");
  kerja("OTHERS");
  kwg("CHINA");
  berlaku("12-12-2023");
  
  return 0;
}