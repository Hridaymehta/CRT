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

static void solve() {
	vi v = input_vi();
	vi ans = get_prefix_sum(v);
	print_vi(ans);
}

int main() {
	solve();
	return 0;
}