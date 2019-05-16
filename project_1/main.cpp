#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	int i;
	ifstream fin;
	fin.open("File.txt");
	if(!fin.is_open()) {
		cout << "Ошибка открытия файла" << endl;
	} else {
		while (!fin.eof()) {
			fin >> i;
			cout << setw (10) << oct << i; // Восьмиричная система
			cout << setw (10) << dec << i; // Десятичная система
			cout << setw (10) << hex << i <<endl; // Шестнадцатиричная система
		}
		fin.close();
	}
	return 0;
}
