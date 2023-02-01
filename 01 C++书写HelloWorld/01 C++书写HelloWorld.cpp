#include<iostream>
using namespace std;

void bubbleSort(int* arr, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printArray(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}
}
int main() {
	int arr[10] = { 2,4,12,6,8,9,32,1,6,23 };
	bubbleSort(arr, 10);
	printArray(arr, 10);
	system("pause");

	return 0;
}