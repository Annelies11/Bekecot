#include <iostream>
#include <string>

using namespace std;

int main() {
	int t, i, jawab, bekecot, hari = 0, tinggi = 0;
	string yakin;
	cout<<"==========================KISAH SEEKOR BEKICOT===========================\n"<<endl;
	cout<<"Seekor bekecot mampu menaiki sebuah gedung sepanjang 5 meter ketika siang hari\n";
	cout<<"Namun ketika malam hari dia tidur, dia merosot turun sedalam 4 meter.\n"<<endl;
	cout<<"Masukkan tinggi gedung : "; cin>>t;
	cout<<"\nBerapa hari si bekecot bisa sampai pada puncak gedung?"<<endl;
	do {
	cout<<"Berikan tebakanmu : "; cin>>i;
	cout<<"Anda yakin? (y / n)"<<endl; cin>>yakin;
	} while(yakin=="n");
	
	do {
		tinggi=tinggi+5;
		if(tinggi == t) {
			break;
		}
		tinggi=tinggi-4;
		hari++;
	
	} while(tinggi!=t);
	if(i==hari) {
		cout<<"Anda benar! Jawabannya "<<hari<<" hari.";
		cout<<endl;
	}	else{
		cout<<"Anda salah! Seharusnya "<<hari<<" hari.";
		cout<<endl;
	}
	
	cout<<"Ingin tahu bagaimana cara menghitungnya?"<<endl;
	cin>>yakin;
	if(yakin=="y") {
		
		cout<<"Jadi begini!"<<endl;
		cout<<"Bekecot kan pada siang hari bisa menaiki gedung sepanjang 5 meter, dan siang hari turun 4 meter karena tidur."<<endl;
		cout<<"katakanlah tinggi gedung 10 meter. Kita ibaratkan tinggi bekecot adalah i. Semula i=0, saat pertama kali dilakukan atau hari pertama maka i=0+5-4"<<endl;
		cout<<"Maka i=1. Setelah terhitung 24 jam maka terhitung satu hari, i sudah bernilai 1 maka pada hari kedua perhitungannya adalah i=1, maka i=1+5-4"<<endl;
		cout<<"hasilnya i menjadi 2, kok panjang banget sih? lanjutannya silakan buka di arismahmudi.com"<<endl;
	} else{
		cout<<"Oke, terima kasih!";
		return 0;
	}
	
}
