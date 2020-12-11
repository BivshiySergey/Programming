#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
int input(unsigned int n) {
	vector<int>abc;

	int a, b, c;
	int n;
	cin >> n;
	for (int i = 0; i < n ; i++) {
		int x;
		cin >> x;
		abc.push_back(x);
	}
	abc[0] = a;
	abc[1] = b;
	abc[2] = c;
}
vector<int> BozoSort(unsigned int n, std::vector<int>sort,bool status = true) {
	srand(time(0));
	input(n);

	return sort;
}
vector<int> BozoSort(unsigned int n, vector<vector<int>> sortsort, bool status = true) {
	srand(time(0));
	vector<int>sort1;
	input(n);

	return sort1;
}
vector<int> Bozosort(unsigned int n, unsigned int a, unsigned int b, unsigned int c, bool status = true) {
	srand(time(0));
	vector<int>sort2;
	input(n);
	sort2.push_back(a,b,c)
	return sort2;
}
int main() {
	int n;
	cin >> n;
	vector<int>sort;
	vector<vector<int>>sortsort;
	BozoSort(n, sort, false);
	BozoSort(n, sort);
	BozoSort(n, sortsort, false);
	BozoSort(n, sortsort);
	BozoSort(n, a, b, c, false);
	BozoSort(n, a, b, c);
}