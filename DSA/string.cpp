#include <iostream>
#include <string>
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

static void solve() {
	string s;
	getline(cin, s);
	string_traversal(s);

	/*searching_in_string(s);
	fun_function();*/
}

//KMP algorithm

int main() {
	solve();
	return 0;
}