#include <iostream>
using namespace std;

int main() {
	int num[] = { 1,2,3,4,5,6,7 };
	int k = 3;

	for (int i = 0; i < k; i++) {
		int last = num[6];
		for (int j = 6; j > 0; j--) {
			num[j] = num[j - 1];
		}
		num[0] = last;
	}

	// Print the rotated array
	for (int i = 0; i < 7; i++) {
		cout << num[i] << " ";
	}
	cout << endl;

	return 0;
}