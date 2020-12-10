#include <iostream>
#include <locale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double a, b, c, D, x1, x2, x;
	cin >> a >> b >> c;
	D = b * b - 4 * a * c;
	if (a == 0) {
		x = -c / b;
		cout << "x= " << x;
	}
	else if (D > 0) {
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2;
	}
	else if (D == 0) {
		x = -b / (2 * a);
		cout << "x= " << x;
	}
	else {
		cout << "Корней нет";
	}

	
	return 0;
}