#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"Russian");
	int a, b, i = 1;
	double c = 1;
	while (i > 0){
		cin >> a;
		cin >> b;
		if (a == 0 && b < 0) {
			cout << "Ошибка,попытка поделить на 0" << endl;
		}
		else if (b < 0) {
		for (i = 0; i > b; i--) {
			c = c / a;
			}
			break;
		}

		else {
			for (i = 0; i < b; i++) {
			c = c * a;
			}
			cout << c;
			break;
		}
	}
	
}
