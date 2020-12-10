#include <iostream>
using namespace std;
int main() {
	double x0, v0, t, g = 9.8, xt;
	cin >> x0 >> v0 >> t;
	xt = x0 + v0 * t - g * t * t * 1 / 2;
	cout << xt - x0;


	return 0;
}