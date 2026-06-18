#include <iostream>
using namespace std;

int main() {
	int n = 5;
	int s = 0, e = n - 1, sum = 0;
	int t = 13;
	int arr[5] = {3, 6, 7, 8 , 11};

	while (s < e) {
		sum = arr[s] + arr[e];
		if (sum == t) {
			cout << "Pair found: " << arr[s] << " and " << arr[e] << endl;
			break;
		}
		if (sum < t) {
			s++;
		} else {
			e--;
		}
	}

    return 0;
}