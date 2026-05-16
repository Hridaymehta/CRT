#include <iostream>
#include <vector>
using namespace std;

static int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

static int fibonacci(int n) {
	if (n <= 1) {
		return n;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}

static int fib_memo(int n) {
	vector<int> memo(n + 1, -1);
	memo[0] = 0;
	memo[1] = 1;
	for (int i = 2; i <= n; i++) {
		memo[i] = memo[i - 1] + memo[i - 2];
	}
	return memo[n];
}

static int space_optimized_fib(int n) {
	if (n <= 1) {
		return n;
	}
	int a = 0, b = 1;
	for (int i = 2; i <= n; i++) {
		int c = a + b;
		a = b;
		b = c;
	}
	return b;
}

int main() {
    int num = 10;
    // cout << "Factorial of " << num << " is " << factorial(num) << endl;
    // cout << "Fibonacci of " << num << " is " << fib_memo(num) << endl;
    cout << "Space-optimized Fibonacci of " << num << " is " << space_optimized_fib(num) << endl;
    return 0;
}