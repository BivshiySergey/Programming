#include <iostream>
#include <vector>
#include <map>
using namespace std;
void print_factorization(unsigned int n) {
	vector<int> ar;
	map<int, int> cac;
	int i;
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
		ar.push_back(n);
		int stepen = 1;
		for (int j = 0; j < ar.size() - 1; j++) {
			if (ar[j] == ar[j + 1]) {
				stepen++;
				cac[ar[j]]++;
			}
		}
		if (stepen == 1) {
			for (int l = 0; l < ar.size() - 1; l++) {
				cout << ar[l] << "*";
		}
			for (int m = ar.size() - 1; m > ar.size() - 2; m--) {
				cout << ar[m];
			}
		}
		else { 
			for (auto now : cac) {
				cout << now.first << "^" << stepen << " ";
			}
			for (int p = ar.size() - stepen ; p > stepen ; p--) {
				cout << ar[p];
			}
		}
	}
}
int main() {
	unsigned int n;
	cin >> n;
	print_factorization(n);
}