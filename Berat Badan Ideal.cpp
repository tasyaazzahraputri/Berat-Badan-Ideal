#include <iostream>
#include <cmath>
using namespace std;

int main (){
	string nama;
	string golongan_darah;
	float tinggi_badan;
	float berat_badan;
	float berat_badan_ideal;
	
	getline (cin,nama);
	getline (cin,golongan_darah);
	cin>>tinggi_badan;
	cin>>berat_badan;
	
	
	berat_badan_ideal = tinggi_badan-100-((tinggi_badan-100)*15/100);"\n";
	
	
	cout<<"-----------------------------------------"<<"\n";
	cout<<"nama: "<<nama<<"\n";
	cout<<"golongan darah: "<<golongan_darah<<"\n";
	cout<<"tinggi badan: "<<tinggi_badan<<"cm"<<"\n";
	cout<<"berat badan: "<<berat_badan<<"kg"<<"\n";
	cout<<"berat badan ideal: "<<berat_badan_ideal<<"kg"<<"\n";
	
	return 0;
}
