#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	double sum=0,i;
	int n=0;
	ifstream fin;
	fin.open("Chis.txt");
	if(!fin.is_open()) {
		cout << "Ошибка открытия файла" << endl;
	} else {
		while(fin>>i) {
			n++;
			sum+=i;
		}
		cout<< "Количество чисел: " << n<< endl;
		cout<< "Сумма: " << sum <<endl;
		cout<< "Среднее арифметическое всех чисел: "<< sum/n <<endl;
		fin.close();
	}
	return 0;
}
