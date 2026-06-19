#include <iostream>
using namespace std;

static void find_peak() {
	const int n = 6;
	int arr[n] = { 1,2,6,5,3,1 };
	int s = 0;
	int e = n - 1;

	while (s < e)
	{
		int mid = s + (e - s) / 2;

		if (arr[mid] < arr[mid + 1]) {
			s = mid + 1;
		}
		else {
			e = mid;
		}
	}

	if (s == e) {
		cout << "Peak element is " << arr[s] << " at index " << s << endl;
	}
	else {
		cout << "Peak element is " << arr[e] << " at index " << e << endl;
	}

}

static void rotated_array() {
	const int n = 6;
	int arr[n] = { 3, 4, 5, 6, 1, 2 };
	int l = 0;
	int r = n - 1;
	int target = 6;

	while (l <= r) {
		int mid = l + (r - l) / 2;

		if (arr[mid] == target) {
			cout << "Target found " << arr[mid] << " at " << mid << " index" << endl;
			return;
		}

		if (arr[l] <= arr[mid]) {
			if (target >= arr[l] && target < arr[mid]) {
				r = mid - 1;
			}
			else {
				l = mid + 1;
			}
		}
		else {
			if (target > arr[mid] && target <= arr[r]) {
				l = mid + 1;
			}
			else {
				r = mid - 1;
			}
		}
	}
	
	cout << "Target not found" << endl;
}

static void binary_search() {
	const int n = 7;
	int arr[n] = { 2,5,6,8,9,10,12 };
	int l = 0;
	int r = n - 1;
	int target = 8;

	while (l < r) {
		int mid = (l + r) / 2;

		if (arr[mid] < target) {
			l = mid + 1;
		}
		else if (arr[mid] > target) {
			r = mid - 1;
		}
		else {
			cout << "Target found " << arr[mid] << " at " << mid << " index";
			break;
		}
	}
}

int main() {
	cout << "Find Peak :" << endl;
	find_peak();
	cout << endl;
	cout << "Rotated Array :" << endl;
	rotated_array();
	cout << endl;
	cout << "Binary Search :" << endl;
	binary_search();
	return 0;
}