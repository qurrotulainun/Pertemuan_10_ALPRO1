#include <iostream>
using namespace std;
void LuasPersegi ()
{
	int panjang, lebar;
	cout << "masukkan panjang: ";cin >> panjang;
	cout << "masukkan lebar: ";cin >> lebar;
	cout << "Luas Persegi: " << panjang*lebar;
}
int main()
{
	LuasPersegi();
	return 0;	
}
