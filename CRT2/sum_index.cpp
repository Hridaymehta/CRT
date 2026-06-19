#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& numbers, int target) {
		int s = 0, e = numbers.size() - 1;
		while (s < e) {
			int sum = numbers[s] + numbers[e];
			if (sum == target) {
				return { s + 1, e + 1 };
			}
			if (sum < target) {
				s++;
			}
			else {
				e--;
			}
		}
		return {};
	}
};

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