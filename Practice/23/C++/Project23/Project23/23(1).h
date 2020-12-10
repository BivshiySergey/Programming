#pragma once
int fact(int n) {
	if (n == 0) {
		return(1);
	}
	else {
		n = n * fact(n - 1);
		return (n);
	}
	
}
