#include <iostream>
using namespace std;
int *create(int lenght, int nch = 0, int step = 0) {
	int *arr = new int[lenght];
	for (int i = 0; i < lenght; i++) {
		arr[i] = nch;
		nch += step;
	}
	return arr;
}
int *sort(int *arr, int lenght) {
	int temp, k;
	for (int i = 0; i < lenght - 1; i++) {
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
int *print(int *arr, int lenght) {
	printf("[%d", *arr);
	for (int i = 0; i < lenght ; i++) {
		printf(", %d", arr[i]);
	}
	cout << "]";
	return arr;
}
int main(int argc,char* argv[]) {
	int lenght, nch, step;
	cout << "Enter lenght,start value and step \n";
	cin >> lenght;
	cin >> nch;
	cin >> step;
	int *arr = create(lenght, nch, step);
	sort(arr, lenght);
	print(arr, lenght);
	delete[]arr;
	return 0;
}