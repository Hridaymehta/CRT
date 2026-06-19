#include <iostream>
#include <vector>
using namespace std;

int main() {
	int arr1[] = { 1, 3, 5, 7 };
	int arr2[] = { 2, 4, 6, 8 };
	static int merged[8];

	int i = 0, j = 0, k = 0;

	while (i < 4 && j < 4) {
		if (arr1[i] < arr2[j]) {
			merged[k++] = arr1[i++];
		}
		else {
			merged[k++] = arr2[j++];
		}
	}

	while (i < 4) {
		merged[k++] = arr1[i++];
	}

	while (j < 4) {
		merged[k++] = arr2[j++];
	}

	cout << "Merged array: ";
	for (int i = 0; i < 8; i++) {
		cout << merged[i] << " ";
	}

	return 0;
}