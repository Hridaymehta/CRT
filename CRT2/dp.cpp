#include <iostream>
using namespace std;

// 5 3 2 5 1 5 5
int main() {
	int pans = 0;
	int cnt = 0;

	int a[7] = { 5, 3, 2, 5, 1, 5, 5 };

	for (auto x : a) {
		if (cnt == 0) {
			pans = x;
			cnt++;
		}

		cnt = (pans == x) ? ++cnt : --cnt;
	}

	cout << pans;
	cout << " " << cnt << endl;
	return 0;
}

/*int f(int a[], int n) {
	int curr = a[0];
	int ans = a[0];

	for (int i = 1; i < n; i++) {
		curr = max(a[i], curr + a[i]);
		ans = max(ans, curr);
	}

	return ans;
}

int main() {
	const int n = 5;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << "Maximum sum of contiguous subarray: " << f(a, n) << endl;
	return 0;
}*/