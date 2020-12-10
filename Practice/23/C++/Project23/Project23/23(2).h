#include"23(1).h"
#ifndef SINX_H
#define SINX_H
double sinx(double x, double k) {
	double bruh = x, Sum = bruh;
	for (int i = 1; i <= k; i++) {
		bruh = -((x * x) / ((2 * i) * (2 * i + 1))) * bruh;
		Sum = Sum + bruh;
	}
	return (Sum);
}
#endif