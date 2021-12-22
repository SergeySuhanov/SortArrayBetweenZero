#include<iostream>

using namespace std;

int main() {
	int arr1[5] = { 1, 4, -4, -1, 0 };
	int arr2[5] = { 2, 3, 0, -3, -2 };
	int arr3[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int counter = 0;

	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			if (arr1[i] > 0) {
				arr3[counter] = arr1[i];
			} else if (arr1[i] < 0) {
				arr3[9 - counter] = arr1[i];
			}
			counter++;
		} else {
			if (arr2[i] > 0) {
				arr3[counter] = arr2[i];
			}
			else if (arr2[i] < 0) {
				arr3[9 - counter] = arr2[i];
			}
			counter++;
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << arr3[i] << " ";
	}

	return 0;
}