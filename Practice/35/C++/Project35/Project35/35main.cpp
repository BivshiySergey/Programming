#include<iostream>
#include"35prot.h"
void create(IntArray& arr, int size) {
	arr.data = new int[size];
	arr.size = size;
}
void create(IntArray* arr, int size) {
	create(*arr, size);
}
int get(IntArray& arr, int index) {
	return arr.data[index];
}
int get(IntArray* arr, int index) {
	return get(*arr, index);
}
void set(IntArray& arr, int index, int value) {
	arr.data[index] = value;
}
void set(IntArray* arr, int index, int value) {
	set(*arr, index, value);
}
void print(IntArray& arr) {
	printf("[%d", get(arr, 0));
	for (int i = 0; i < arr.size; i++) {
		printf(", %d", get(arr, i));
	}
	std::cout << "]";
}
void print(IntArray* arr) {
	print(*arr);
}
void resize(IntArray& arr, int newSize) {
	if (newSize > arr.size) {
		int *arr2 = new int[newSize];
		memcpy(arr2, arr.data, sizeof(int)*arr.size);
		for (int i = arr.size; i < newSize; ++i) {
			arr2[i] = 0;
		}
		delete[] arr.data;
		arr.data = arr2;
		arr.size = newSize;
	}
	else {
		int *arr2 = new int[newSize];
		memcpy(arr2, arr.data, sizeof(int)*newSize);
		delete[] arr.data;
		arr.data = arr2;
		arr.size = newSize;
	}
}
void resize(IntArray* arr, int newSize) {
	resize(*arr, newSize);
}
void destroy(IntArray& arr) {
	if (!arr.data) {
		delete[] arr.data;
		arr.data = nullptr;
	}
	arr.size = 0;
}
void destroy(IntArray* arr) {
	destroy(*arr);
}
int main(int argc, char*argv[]) {
	int size = 30;
	IntArray arr;
	create(arr, size);
	for (int i = 0; i < size; ++i) {
		set(arr, i, i + 1);
	}
	print(arr);
	resize(arr, 50);
	print(arr);
	resize(arr, 10);
	print(arr);
	destroy(arr);
}