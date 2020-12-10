#include"23(1).h"
#ifndef CKN_H
#define CKN_H
int ckn(double n, double k) {
	double c = fact(n) / (fact(k) * fact(n - k));
	return(c);
}
#endif