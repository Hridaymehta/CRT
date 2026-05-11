#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

static void string_traversal(string& s) {
	string::iterator itr;
	for (itr = s.begin(); itr != s.end(); itr++) {
		cout << *itr;
	}
	cout << endl;
}

static void searching_in_string(string& s) {
	s = "The lazy dog jumps over the lazy fox";
	string f = "lazy";
	cout << s.find(f) << endl;
}

static void fun_function() {
	string a = "Hello", b = "World";
	a.swap(b);
	b.swap(a);
	swap(a, b);
	cout << a << " " << b << endl;
}

static string reverse_string(string& s) {
	string rev = s;
	for (int i = 0; i < s.size(); i++) {
		rev[i] = s[s.size() - i - 1];
	}
	return rev;
}

static void remove_duplicates_in_array() {
	vector<int> v = {5,9,6,2,6,7,8,5,3,7,3,4};
	for (int i = 0; i < v.size(); i++) {
		for (int j = i + 1; j < v.size(); j++) {
			if (v[i] == v[j]) {
				v.erase(v.begin() + j);
				j--;
			}
		}
	}

	for (int i = 0; i < v.size(); i++) {
		for (int j = i + 1; j < v.size(); j++) {
			if (v[i] > v[j]) {
				swap(v[i], v[j]);
			}
		}
	}
	cout << endl;

	cout << "After removing duplicates: ";
	for (int i : v) {
		cout << i << " ";
	}

	cout << endl;
}

static int duplicates(vector <int>& v) {
	int d = 0;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] != v[d]) {
			v[++d] = v[i];
		}
	}
	return d + 1;
}

static void solve() {
	string s;
	getline(cin, s);
	//string_traversal(s);
	cout << reverse_string(s);

	remove_duplicates_in_array();

	vector<int> v = { 0,0,1,1,1,2,2,3,3,4 };
	cout << "Number of unique elements: " << duplicates(v) << endl;

	/*searching_in_string(s);
	fun_function();*/
}

//KMP algorithm

int main() {
	solve();
	return 0;
}