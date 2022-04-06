#include <iostream>
using namespace std;
void main() 
{
	using namespace std;
	setlocale(LC_ALL, "ru");
	char x1 = 'r', x2 = 'R';
	char xDiff[3];
	_itoa_s(int(x1 - x2), xDiff, 16);
	cout << "Разница в 10 системе: " << x1 - x2 << endl;
	cout << "Разница в 16 системе: " << xDiff << endl << endl;
	//Второе задание:
	char y1 = 'м', y2 = 'М';
	char yDiff[3];
	_itoa_s(int(y1 - y2), yDiff, 16);
	cout << "Разница в 10 системе: " << y1 - y2 << endl;
	cout << "Разница в 16 системе: " << yDiff << endl << endl;
	//Третье задание:
	int count = 137; // Количество цифр имени
	char symb = count;
	cout << "Символ " << symb;
}

