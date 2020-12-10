#include <iostream>
#include <locale>
using namespace std;
int main() {

	setlocale(LC_ALL, "Russian");
	int a, b ,i = 1;
	char c;
	cout << "Введите первое число, знак операции,второе число" << endl;
	while (i > 0) {
		cin >> a >> c >> b;
		if (c == '*') {
			cout << a * b; 
			break;

		}
		else if (c == '+') {
			cout << a + b;
			break;

		}
		else if ((c == '/') && (b != 0)) {
			cout << a / b; 
			break;

		}
		else if (c == '-') {
			cout << a - b; 
			break;

		}
		else {
			cout << "Не верный знак операции" << endl;
		}
	}
}
