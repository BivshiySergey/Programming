#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
int BozoSort(bool status) {
	srand(time(0));
	vector<int> sort;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		sort.push_back(temp);
	}
	BozoSort(false);
	if (status) {
		while (!(sort[0] < sort[1] && sort[1] < sort[2] && sort[2] < sort[3])) {
			sort[rand() % 3] = sort[rand() % 3];
	}
	else {
		while (!(sort[0] > sort[1] && sort[1] > sort[2] && sort[2] > sort[3])) {
			sort[rand() % 3] = sort[rand() % 3];
		}
	}
	BozoSort(false);
	BozoSort(true);
}
