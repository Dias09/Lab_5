#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin_1;
	fin_1.open("D21.bin",ios::binary);
	if(!fin_1.is_open()) 
	{
	cout << "Ошибка открытия файла" << endl;
	 } 
	else {
		cout << "Файл подтвержден" <<endl;
		double d;
		int num = 0;
		while (fin_1.read((char*)&d, sizeof(d))) 
			{
			num++;
		    }
		 fin_1.close();
		 cout << "Количество чисел: " << num << endl;
		 float * f = new float [num];
		 ifstream fin_2;
	     fin_2.open("D21.bin",ios::binary);
		 fin_2.read((char*)f, sizeof(f));
		 for (int i = 0; i < num; i++)
		 {
			 f[i]=1/f[i];
			 cout << f[i] << endl;
		 }
		 fin_2.close();
		 ofstream fout;
		 fout.open("DD21.bin",ios::binary);
		 fout.write((char*)&f, sizeof(f));
		 fout.close();
		 //for (int i = 0; i < num; i++)
		 //{
		 //cout << f[i] << endl;
		 //}
	}
	return 0;
}
