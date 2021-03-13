#include<iostream>
using namespace std;
void create(int **arr, int length, int nch = 0, int step = 0) {
	*arr = new int[length];
	for (int i = 0; i < length; i++) {
		(*arr)[i] = nch;
		nch += step;
	}
}
int *sort(int *arr, int length) {
	int temp, k;
	for (int i = 0; i < length - 1; i++) {
		k = i + 1;
		temp = arr[k];
		for (int j = i + 1; j > 0; j--) {
			if (temp < arr[j - 1]) {
				arr[j] = arr[j - 1];
				k = j - 1;
			}
		}
		arr[k] = temp;
	}
	return arr;
}
int *print(int *arr, int length) {
	printf("[%d", *arr);
	for (int i = 0; i < length; i++) {
		printf(", %d", arr[i]);
	}
	cout << "]";
	return arr;
}
void destroy(int **arr) {
	if (!*arr) {
		delete[] * arr;
		*arr = nullptr;
	}
}
int main(int argc, char* argv[]) {
	int length, nch, step;
	cout << "Enter length,start value and step \n";
	cin >> length;
	cin >> nch;
	cin >> step;
	int *arr;
	create(&arr, length, nch, step);
	sort(arr, length);
	print(arr, length);
	destroy(&arr);
	return 0;
}