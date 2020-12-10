#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	long int n, x = 1, zi = 1;
	int i = 0;
	while (zi > 0) {
		cin >> n;
		if (n < 0) {
			cout << "Данные введены неверно" << endl;
		}
		else if (n == 0) {
			i = 0;
			cout << i;
			break;
		}
		else {
			while (i <= n) {
				x = x * 2;
				i += 1;
				if (x > n) {
					break;
				}
				else {
					continue;
				}
			}
			cout << i;
			break;
		}
	}
}