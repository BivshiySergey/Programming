#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
void print_factorization(unsigned int n);
int main() {
	vector<int> ar;
	vector<string> output;
	int i;
	char z = '^';
	char x = '*';
	int n;
	cin >> n;
	int a = 0;
	for (int k = 2; k < n; k++) {
		if (n % k != 0) {
			a += 1;
		}
	}
	if (a == n - 2) {
		cout << n;
	}
	else {
		for (i = 2; i < n;) {
			if (n % i == 0) {
				n /= i;
				ar.push_back(i);
			}
			else {
				i++;
			}
		}
		int stepen = 0;
		for (int j = 0; j < ar.size() - 1; j++) {
			if (ar[j] == ar[j + 1]) {
				stepen++;
			}
		}
		if (stepen == 0) {
			for (int k = 0; k < ar.size() - 1; k++) {
				if ()
			}
		}
	}
}