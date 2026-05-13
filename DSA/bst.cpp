#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef vector<int> vi;

#define forn(i, n) for (int i = 0; i < n; i++)

static void binary_search(vi& v, int target) {
		int left = 0;
		int right = v.size() - 1;
		int mid;

		forn(i, v.size()) {
			mid = left + (right - left) / 2;
			if (v[mid] == target) {
				cout << "Found at index: " << mid << endl;
				return;
			}
			else if (v[mid] < target) {
				left = mid + 1;
			}
			else {
				right = mid - 1;
			}
		}
		cout << "Not found" << endl;
}

int main() {
	vi v = { 10,50,20,40,30 };
	sort(v.begin(), v.end());
	binary_search(v, 20);
	return 0;
}