#include <iostream>
#include "23(1).h"
#include "23(2).h"
#include "23(3).h"
#include <math.h>
#define PI 3.1415
int main() {
	std::cout << "n" << "\t" << "n!" << "\n";
	for (int n = 10; n > 0; n--) {
		std::cout << n << "\t" << fact(n) << "\n";
	}
	std::cout << "x" << "\t" << "sin(x)" << "\n";
	for (double x = 0; x <= ((PI )/ 4);) {
		std::cout << round(x*10000)/10000 << "\t" << round(sinx(x, 5)*10000)/10000 << "\n";
		x = x + (PI / 180);
	}
	std::cout << "k" << "\t" << "C" << "\n";
	for (int k = 1; k <= 10; k++) {
		std::cout << k << "\t" << ckn(10, k) << "\n";
	}
}
