#include <iostream>
#include "vybor2.h"
#include <windows.h>

using namespace std;
void vybor2()
{
	char symbol1, symbol2;
	char symb1, symb_2;
	cout << "Введите букву русского алфавита в строчном или прописном виде: ";
	cin >> symb1 >> symb_2;
	cout << "Разница равна = " << symb1 - symb_2 << endl;
}