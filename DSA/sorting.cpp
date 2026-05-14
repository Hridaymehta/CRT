#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

static void insertionSort(int arr[], int& n) {
	for (int i = 1; i < n; i++) {
		for (int j = i - 1; j >= 0 && arr[j] < arr[j + 1]; j--) {
			swap(arr[j + 1], arr[j]);
		}
	}

	while (n > 0) {
		cout << arr[--n] << " ";
	}
}

static void merge(vector<int>& arr, int left, int mid, int right) {
	int n1 = mid - left + 1;
	int n2 = right - mid;

	vector<int> L(n1), R(n2);

	for (int i = 0; i < n1; i++) {
		L[i] = arr[left + i];
	}
	for (int i = 0; i < n2; i++) {
		R[i] = arr[mid + 1 + i];
	}

	int i = 0, j = 0, k = left;
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k++] = L[i++];
		} else {
			arr[k++] = R[j++];
		}
	}

	while (i < n1) {
		arr[k++] = L[i++];
	}

	while (j < n2) {
		arr[k++] = R[j++];
	}
}

static void mergeSort(vector<int>& arr, int left, int right) {
	if (left >= right) {
		return;
	}

	int mid = left + (right - left) / 2;
	mergeSort(arr, left, mid);		
	mergeSort(arr, mid + 1, right);
	merge(arr, left, mid, right);
}

int main() {
	vector<int> v = { 5, 2, 9, 1, 5, 6 };
	//insertionSort(arr, n);
	mergeSort(v, 0, v.size() - 1);
	for(int num : v) {
		cout << num << " ";
	}
	return 0;
}