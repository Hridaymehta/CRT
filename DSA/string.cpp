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

static bool is_anagram2(string& s1, string& s2) {
	if (s1.size() != s2.size()) {
		return false;
	}
	int count[26] = {0};
	for (int i = 0; i < s1.size(); i++) {
		count[s1[i] - 'a']++;
		count[s2[i] - 'a']--;
	}
	for (int i = 0; i < 26; i++) {
		if (count[i] != 0) {
			return false;
		}
	}
	return true;
}

static bool is_anagram(string& s1, string& s2) {
	if (s1.size() != s2.size()) {
		return false;
	}
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());
	return s1 == s2;
}

static void solve() {
	string s;
	getline(cin, s);
	//string_traversal(s);
	cout << reverse_string(s);

	string s1 = "listen", s2 = "silent";

	remove_duplicates_in_array();

	vector<int> v = { 0,0,1,1,1,2,2,3,3,4 };
	cout << "Number of unique elements: " << duplicates(v) << endl;

	cout << "Is " << s1 << " an anagram of " << s2 << "? " << (is_anagram(s1, s2) ? "True" : "False") << endl;
	cout << "Is " << s1 << " an anagram of " << s2 << "? " << (is_anagram2(s1, s2) ? "True" : "False") << endl;

	/*searching_in_string(s);
	fun_function();*/
}

//KMP algorithm

int main() {
	solve();
	return 0;
}