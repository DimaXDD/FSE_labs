#include <iostream>
#include "vybor3.h"
#include <windows.h>

using namespace std;
void number_v_kod()
{
	char symbol1, symbol2;
	char symb1, symb_2;
	char sym;
	cout << "¬ведите любую цифру от 1 до 9: "; cin >> sym;
	while (sym > '9' || sym < '0') {
		cout << "\n¬ведите число: " << endl;
		cin >> sym;
	}
	cout << int(sym);
}