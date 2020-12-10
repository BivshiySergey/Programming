#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n, a,i = 1;
	while (i > 0) {
		cin >> n;
		if (n >= 2) {
			a = 0;
			for (int i = 2; i < n; i++) {
				if (n % i != 0) {
					a += 1;
				}
				else {
					a = a;

				}
			}
			if (a == n - 2) {
				cout << "Простое";
				break;
			}
			else {
				cout << "Составное";
				break;
			}
		}
		else {
			cout << "Введены неверные данные" << endl;
		}

	}
}