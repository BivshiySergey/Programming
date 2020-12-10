#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a, b = 1,i = 1;
	while (i > 0) {
		cin >> a;

		if (a <= 0) {
			cout << "Введены неверные данные" << endl;
		}
		else {
			for (; a > 0; a--) {
				b = a * b;
			}
			cout << b;
			break;
		}
	}
}