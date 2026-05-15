#include <iostream>
#include <vector>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int fibonacci(int n) {
	if (n <= 1) {
		return n;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int fib_memo(int n) {
	vector<int> memo(n + 1, -1);
	memo[0] = 0;
	memo[1] = 1;
	for (int i = 2; i <= n; i++) {
		memo[i] = memo[i - 1] + memo[i - 2];
	}
	return memo[n];
}

int main() {
    int num = 10000;
    // cout << "Factorial of " << num << " is " << factorial(num) << endl;
    cout << "Fibonacci of " << num << " is " << fib_memo(num) << endl;
    return 0;
}