#include <iostream>
#include <vector>
using namespace std;

static int prefix(int arr[], int n) {
	int prefix_sum[5];
	prefix_sum[0] = arr[0];
	for (int i = 1; i < n; i++) {
		prefix_sum[i] = prefix_sum[i - 1] + arr[i];
	}
	return prefix_sum[n - 1];
}

class Solution {
public:
	int subarraySum(vector<int>& nums, int k) {
		int count = 0;
		for (int i = 0; i < nums.size(); i++) {
			int sum = 0;
			for (int j = i; j < nums.size(); j++) {
				sum += nums[j];
				if (sum == k) {
					count++;
				}
			}
		}
		return count;
	}
};

class Solution {
public:
	int maxSubarraySum(vector<int>& arr, int k) {
		int n = arr.size();
		if (n < k) return -1;
		int max_sum = 0;
		for (int i = 0; i < k; i++) {
			max_sum += arr[i];
		}
		int window_sum = max_sum;
		for (int i = k; i < n; i++) {
			window_sum += arr[i] - arr[i - k];
			max_sum = max(max_sum, window_sum);
		}
		return max_sum;
	}
};

int main() {
	int arr[5] = {68, 65, 40, 70, 30};
	int result = prefix(arr, 5);
	int start = prefix(arr, 3);

	cout << "Range 4 to 5: " << result - start << endl;
	return 0;
}