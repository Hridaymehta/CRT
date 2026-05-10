#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> vi;

#define forn(i, n) for (int i = 0; i < n; i++)

static vi input_vi() {
	int n;
	cin >> n;
	vi v(n);
	forn(i,n) {
		cin >> v[i];
	}
	return v;
}

static void print_vi(const vi &v) {
	forn(i,v.size()) {
		cout << v[i] << " ";
	}
	cout << endl;
}

static void reverse(vi &v) {
	int n = v.size();
	forn(i, n / 2) {
		swap(v[i], v[n - i - 1]);
	}
}

vi get_prefix_sum(const vi &v) {
	int n = v.size();
	vi prefix_sum(n);
	prefix_sum[0] = v[0];
	forn(i, n - 1) {
		prefix_sum[i + 1] = prefix_sum[i] + v[i + 1];
	}
	return prefix_sum;
}

static int largest2(vi &v) {
	int n = v.size();
	int largest = INT_MIN;
	int largest2 = INT_MIN;

	forn(i, n) {
		if (v[i] > largest) {
			largest2 = largest;
			largest = v[i];
		} else if (v[i] > largest2 && v[i] != largest) {
			largest2 = v[i];
		}
	}

	return largest2;
}

static void solve() {
	vi v = input_vi();
	int ans = largest2(v);
	cout << ans << endl;
}

int main() {
	solve();
	return 0;
}