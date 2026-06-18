#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = { 10, 20, 30, 40, 50, 60, 70 };
    int k = 3;

    int window_sum = nums[0] + nums[1] + nums[2];
    int max_sum = window_sum;

    for (int i = k; i < nums.size(); ++i) {
        window_sum += nums[i] - nums[i - k];
        max_sum = max(max_sum, window_sum);
    }
    
    cout << "Maximum sum of " << k << " consecutive elements is: " << max_sum << endl;

    return 0;
}