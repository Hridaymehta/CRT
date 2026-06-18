#include <iostream>
using namespace std;

static int prefix(int arr[], int n) {
	int prefix_sum[5];
	prefix_sum[0] = arr[0];
	for (int i = 1; i < n; i++) {
		prefix_sum[i] = prefix_sum[i - 1] + arr[i];
	}
	return prefix_sum[n - 1];
}

int main() {
	int arr[5] = {68, 65, 40, 70, 30};
	int result = prefix(arr, 5);
	int start = prefix(arr, 3);

	cout << "Range 4 to 5: " << result - start << endl;
	return 0;
}