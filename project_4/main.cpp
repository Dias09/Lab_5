#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("F1.txt");
	if(!fin.is_open()) {
		cout << "Ошибка открытия файла" << endl;
	} else {
		cout << "Первый файл подтвержден" <<endl;
	}
	ofstream fout;
	fout.open("F2.txt",ios::app);
	if(!fout.is_open()) {
		cout << "Ошибка открытия файла" << endl;
	} else {
		cout << "Второй файл подтвержден" <<endl;
	}
	string str; //Строка-буфер
	while(getline(fin, str)) {
		fout << str << endl;
		fin.close();
		fout.close();
	}
	return 0;
}
