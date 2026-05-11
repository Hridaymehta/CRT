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

vi get_suffix_sum(const vi &v) {
	int n = v.size();
	vi suffix_sum(n);
	suffix_sum[n - 1] = v[n - 1];
	forn(i, n - 1) {
		suffix_sum[n - i - 2] = suffix_sum[n - i - 1] + v[n - i - 2];
	}
	return suffix_sum;
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

	return (largest2 == INT_MIN) ? -1 :largest2;
}

static void solve() {
	/*vi v = input_vi();
	vi ans = get_suffix_sum(v);
	print_vi(ans);*/

	cout << "Iterators: ";
	vi v = {1,2,3,4,5};
	vi::iterator itr;
	for (itr = v.begin(); itr != v.end(); itr++) {
		cout << *itr << " ";
	}
}

int main() {
	solve();
	return 0;
}