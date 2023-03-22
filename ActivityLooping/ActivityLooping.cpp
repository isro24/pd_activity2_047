#include <iostream>
using namespace std;

float Luarpersegipanjang(float p, float l) {
	return p * l;
}

float Luassegitiga(float a, float t) {
	return 0.5 * a * t;
}

float Luaslingkaran(float r) {
	return 3.14 * r * r;
}


int main() {

	float panjang, lebar, tinggi, jejari, alas;
	int pilihan;


	cout << "---------------------" << endl;
	cout << "-------M E N U-------" << endl;
	cout << "---------------------" << endl;

	cout << "1. Luas Persegipanjang" << endl;
	cout << "2. Luas Segitiga" << endl;
	cout << "3. Luas Lingkaran" << endl;
	cout << "4. Exit" << endl;
	
	cout << "Masukkan pilihan : ";


	
	system("cls");

	do
	{


		switch (pilihan)
		{
		case 1:
			cout << "Masukan panjang : ";
			cin >> panjang;
			cout << "Masukan lebar : ";
			cin >> lebar;
			cout << "Luas persegipanjang = " << Luaspersegipanjang(alas, tinggi);
			break;

		case 2:
			cout << "Masukan alas : ";
			cin >> alas;
			cout << "Masukan tinggi : ";
			cin >> tinggi;
			cout << "Luas Segitiga  = " << Luassegitiga(alas, tinggi);
			break;
		
		case 3:
			cout << "Masukkan Jari-jari : ";
			cin >> jejari;
			cout << "Luas Lingkaran = " << Luaslingkaran(jejari);
			break;
		
		case 4:

			break;
		default:
			cout << "pilihan anda salah!";
			break;
		}
	} while (pilihan != 4);

}
