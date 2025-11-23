#include <iostream>
#include <string>
using namespace std;

class Insan{
	int yas;
	string isim;
	char cinsiyet;
	
	public:
		Insan(){ cout<<"Insan"<<endl;}
			
};

class Ogrenci:public Insan{
	string ogrenciNo;
	string universite;
	public:
		Ogrenci(){ cout<<"Ogrenci"<<endl;}
};


int main(){
	Insan i1;
	Ogrenci o1;
	return 0;
}
