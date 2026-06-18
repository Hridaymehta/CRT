#include <iostream>
using namespace std;

static int prefix(int arr[], int n) {
	int prefix_sum[n + 1];
	prefix_sum[0] = 0;
	for (int i = 1; i <= n; i++) {
		prefix_sum[i] = prefix_sum[i - 1] + arr[i - 1];
	}

	/*cout << "Prefix sum array: ";
	for (int i = 0; i <= n; i++) {
		cout << prefix_sum[i] << " ";
	}*/
	return prefix_sum[n];
}

int main() {
	const int n = 3;
	int arr[n] = { 1, 2, 3 };
	int k = 3;
	int count = 0;

	for(int i = 0; i <= n; i++) {
		int result = prefix(arr, i);

		if (arr[i] == k && i < n) {
			count++;
		}

		if (result == k) {
			count++;
		}
	}

	cout << count;

	return 0;
}