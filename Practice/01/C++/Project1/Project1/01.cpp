#include <iostream>
#include <locale>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUSSIAN");
	cout << "Результат выражения 2+2*2 = " << 2 + 2 * 2;
	return 0;
}