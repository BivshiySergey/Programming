#include <iostream>
#include <cmath>
#include <locale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int vibor, a, b, c, x1, y1, x2, y2, x3, y3, i = 1;
	double p, p1, s;
	double AB, BC, AC;
	cout << "1 - Ввод длин сторон" << endl;
	cout << "2 - Ввод координат вершин" << endl;
	while (i > 0) {
		cin >> vibor;
		if (vibor == 1 or vibor == 2) {
			switch (vibor) {
			case 1:
				cout << "Введите длины сторон" << endl;
				cin >> a;
				cin >> b;
				cin >> c;
				p = (a + b + c) / 2;
				s = sqrt(p * (p - a) * (p - b) * (p - c));
				cout << "s= " << s; break;
			case 2:
				cout << "Введите координаты вершин" << endl;
				cin >> x1 >> y1;
				cin >> x2 >> y2;
				cin >> x3 >> y3;
				AB = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
				BC = sqrt(pow((x3 - x2), 2) + pow((x3 - y2), 2));
				AC = sqrt(pow((x3 - x1), 2) + pow((x3 - y1), 2));
				p1 = (AB + BC + AC) / 2;
				s = sqrt(p1 * (p1 - AB) * (p1 - BC) * (p1 - AC));
				cout << "s= " << s; break;
			}
			return 0;
		}
		else {
			cout << "Ошибочный ввод";
		}
	}
}