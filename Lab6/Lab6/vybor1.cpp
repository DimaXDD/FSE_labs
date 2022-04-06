#include <iostream>
#include "vybor1.h"
#include <windows.h>

using namespace std;
void vybor1()
{
	using namespace std;
	char symbol1, symbol2;
	char symb1, symb_2;
	cout << "Введите букву латинского алфавита в строчном или прописном виде: ";
	cin >> symbol1 >> symbol2;
	//while (int(symbol1) < int('a') || int(symbol1) > int('z') || int(symbol2) < int('A') || int(symbol2) > ('Z') || abs(symbol1 - symbol2) != 32) {
		cout << "Введите букву латинского алфавита в строчном или прописном виде: ";
		cin >> symbol1 >> symbol2;
	
	cout << "Разница равна = " << symbol1 - symbol2 << endl;
}