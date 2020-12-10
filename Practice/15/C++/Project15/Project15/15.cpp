#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int pc, casino, i, status;
	i = 1;
	cout << "Попробуйте угадать число от 0 до 100,у вас 5 попыток: ";
	while (i > 0)
	{
		casino = rand() % 100;
		for (int popitka = 0; popitka < 5; popitka++)
		{
			cin >> pc;
			if (pc == casino) {
				cout << "ПОздравляю! Вы угадали" << endl;
				break;
			}
			else if (pc < casino && popitka != 4) {
				cout << "Загаданное число больше" << endl;
			}
			else if (pc > casino && popitka != 4) {
				cout << "Загаданное число меньше" << endl;
			}
			else if (popitka == 4) {
				cout<< "Вы проиграли.Было загадано: " << casino;
			}
		}
		cout << "Хотите начать сначала? (1 - ДА)";
		cin >> status;
		if (status != 1) {
			break; 
		}
	}
	return 0;
}