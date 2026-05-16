#include <iostream>
#include <vector>
using namespace	std;

static int climbStairs(int n) {
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 2;
	}
	return climbStairs(n - 1) + climbStairs(n - 2);
}

static int climbStairsMemo(int n) {
	vector<int> memo(n + 1, -1);
	memo[1] = 1;
	memo[2] = 2;
	for (int i = 3; i <= n; i++) {
		memo[i] = memo[i - 1] + memo[i - 2];
	}
	return memo[n];
}

static int climbStairsSpaceOptimized(int n) {
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 2;
	}
	int a = 1, b = 2;
	for (int i = 3; i <= n; i++) {
		int c = a + b;
		a = b;
		b = c;
	}
	return b;
}

static int rob(vector<int>& nums) {
	int n = nums.size();
	int rob1 = 0, rob2 = 0;
	for (int i = 0; i < n; i++) {
		int temp = max(rob1 + nums[i], rob2);
		//cout << "Rob1: " << rob1 << ", Rob2: " << rob2 << ", Temp: " << temp << endl;
		rob1 = rob2;
		rob2 = temp;
		//cout << "Rob1: " << rob1 << ", Rob2: " << rob2 << ", Temp: " << temp << endl;
	}
	return rob2;
}

static int robspaceOptimized(vector<int>& nums) {
	int n = nums.size();
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return nums[0];
	}
	int rob1 = nums[0], rob2 = max(nums[0], nums[1]);
	for (int i = 2; i < n; i++) {
		int temp = max(rob1 + nums[i], rob2);
		rob1 = rob2;
		rob2 = temp;
	}
	return rob2;
}

int main() {
	vector<int> n = {1,2,3,1};
	/*cout << "Number of ways to climb " << n << " stairs: " << climbStairs(n) << endl;
	cout << "Number of ways to climb " << n << " stairs (Memoized): " << climbStairsMemo(n) << endl;*/
	//cout << "Number of ways to climb " << n << " stairs (Space Optimized): " << climbStairsSpaceOptimized(n) << endl;
	cout << "Maximum amount that can be robbed: " << robspaceOptimized(n) << std::endl;
	return 0;
}