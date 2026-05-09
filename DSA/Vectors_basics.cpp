#include <iostream>
#include <vector>
using namespace std;

void arrays() {
	const int n = 5;
	int a[n];
	for (int i = 0; i < n; i++) {
		a[i] = i * i;
	}

	cout << "Array elements: ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

	cout << endl;
}

void vectors() {
	int n;
	cin >> n;
	int sum = 0;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		v[i] = i * i;
		sum += v[i];
	}

	v.pop_back();
	v.push_back(10);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	cout << "Sum of vector elements: " << sum << endl;
}

int main() {
	arrays();
	vectors();
	return 0;
}