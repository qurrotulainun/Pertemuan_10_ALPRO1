#include <iostream>
using namespace std;
void garis()
{
	cout<<"============================================================================ \n";
}
void identitas()
{
	cout<<"Nama		: QURROTUL AINUN NI'MATUS SHOLIHAH \n";
	cout<<"NIM		: 193100056 \n";
	cout<<"PRODI		: ILMU SISTEM INFORMASI \n";
	cout<<"FAKULTAS	: KOMPUTER \n";
	cout<<"====================================2019==================================== \n";
}
void eksekusi()
{
	int nomor;	
	float a,b,c,d;	
	char suhu;
	do 
	{
	cout<<"\n";
	cout<<"============================================================================ \n";
	cout<<" Pilihan Suhu : \n";
	cout<<" 1. CELCIUS \n";
	cout<<" 2. KELVIN \n";
	cout<<" 3. RHEAMUR \n";
	cout<<" 4. FAHRENHEIT \n";
	cout<<" Masukkan Nomor Pada Daftar Pilihan Suhu Yang Akan Diselesaikan [1/2/3/4] : ";cin>>nomor;
	cout<<"============================================================================";
	cout<<endl;
	switch (nomor)
		{
		case 1 :
			cout<<" \n 1. CELCIUS \n";
			cout<<" Masukkan nilai suhu derajat celcius : ";cin>>a;
			b = a + 273;
			c = a * 4 / 5;
			d = a * 9 / 5 + 32;
			cout<<" Nilai suhu kelvin : " <<b << endl;
			cout<<" Nilai suhu rheamur : " <<c <<endl;
			cout<<" Nilai suhu fahrenheit : " <<d <<endl;
			cout<<"===========================================================================";
			cout<<"\n\n Kembali Ke daftar Pilihan Suhu [Y/T] : ";cin>>suhu;
			break;
		case 2 :
			cout<<" \n 2. KELVIN \n";
			cout<<" Masukkan nilai suhu derajat kelvin : ";cin>>a;
			b = a - 273;
			c = (a - 273) * 4 / 5;
			d = (a - 273) * 9 / 5 + 32;
			cout<<" Nilai suhu celcius : " <<b << endl;
			cout<<" Nilai suhu rheamur : " <<c <<endl;
			cout<<" Nilai suhu fahrenheit : " <<d <<endl;
			cout<<"============================================================================";
			cout<<"\n\n Kembali Ke daftar Pilihan Suhu [Y/T] : ";cin>>suhu;
			break;
		case 3 :
			cout<<" \n 3. RHEAMUR \n";
			cout<<" Masukkan nilai suhu derajat rheamur : ";cin>>a;
			b = a * 5 / 4;
			c = a * 5 / 4 + 273;
			d = a * 9 / 4 + 32;
			cout<<" Nilai suhu celcius : " <<b << endl;
			cout<<" Nilai suhu kelvin : " <<c <<endl;
			cout<<" Nilai suhu fahrenheit : " <<d <<endl;
			cout<<"============================================================================";
			cout<<"\n\n Kembali Ke daftar Pilihan Suhu [Y/T] : ";cin>>suhu;
			break;
		case 4 :
			cout<<" \n 4. FAHRENHEIT \n";
			cout<<" Masukkan nilai suhu derajat fahrenheit : ";cin>>a;
			b = (a - 32) * 5 / 9;
			c = (a - 32) * 5 / 9 + 273;
			d = (a - 32) * 4 / 9;
			cout<<" Nilai suhu celcius : " <<b << endl;
			cout<<" Nilai suhu kelvin : " <<c <<endl;
			cout<<" Nilai suhu rheamur : " <<d <<endl;
			cout<<"============================================================================";
			cout<<"\n\n Kembali Ke daftar Pilihan Suhu [Y/T] : ";cin>>suhu;		
			break;
		default :
			cout<<" Nomor Yang Anda Masukkan Salah.";
		}
	}
	while (suhu=='Y' || suhu=='y');
 	cout<<"\n Semoga Dapat Membantu Mengukur Suhu Setiap Jenis Konversi Satuan Suhu."<<endl;
}
main()
{
	garis();
	identitas();
	garis();
	eksekusi();
	return 0;
}
