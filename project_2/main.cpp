#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int size_dec = 10, size_oct = 7, size_hex = 15;
	int i = 0;
    cout<<"Десятичная таблица умножения"<<endl;
	for(i = 0; i < size_dec*size_dec; i++) {
		cout << setw(4) << dec << (i/size_dec + 1)*(i%size_dec + 1);

		if((i + 1)%size_dec == 0) cout << endl;
	}
	cout<<endl<<"Восьмиричная таблица умножения"<<endl;
	for(i = 0; i < size_oct*size_oct; i++) {
		cout << setw(4) << oct << (i/size_oct + 1)*(i%size_oct + 1);

		if((i + 1)%size_oct == 0) cout << endl;
	}
	cout<<endl<<"Шестнадцатеричная таблица умножения"<<endl;
	for(i = 0; i < size_hex*size_hex; i++) {
		cout << setw(4) << hex << (i/size_hex + 1)*(i%size_hex+ 1);

		if((i + 1)%size_hex == 0) cout << endl;
	}
	return 0;
}

