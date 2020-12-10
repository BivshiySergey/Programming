#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int h1, m1, h2, m2,i=1;
	char bruh1, bruh2;
	while (i > 0) {
		cout << "Введите время прибытия первого: ";
		cin >> h1 >> bruh1 >> m1;
		cout << "Введите время прибытия второго: ";
		cin >> h2 >> bruh2 >> m2;
		if (bruh1 != ':' || bruh2 != ':' || m1 > 59 || m2 > 59 ||
			h1 > 23 || h2 > 23 || 0 > m1 || 0 > m2 || 0 > h1 || 0 > h2) {
			cout << "Введен неверный формат времени" << endl;
		}
		else if ((abs(m2 - m1) <= 15) || ((h2 - h1 == 1) && (m2 - m1 + 60 <= 15))
			|| ((h2 - h1 == -23) && (m2 -m1 + 60 <=15))){
			cout << "Встреча состоится";
			break;
		}
		else {
			cout << "Встреча не состоится";
			break;
		}
	}
	
}