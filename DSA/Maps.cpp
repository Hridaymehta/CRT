// A Map is collection of key-value pairs where each key is unique and maps to a specific value.

#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

typedef map<int, int> mi;

static void populate_map(mi& plus1) {
	// Way 1: Using insert function
	plus1[0] = 1;
	plus1[1] = 2;

	// Way 2: Using insert function
	pair<int, int> p1(-1, 0);
	plus1.insert(p1);

	// Way 3: Using insert function with make_pair
	plus1.insert(make_pair(3, 4));


}

static void print_map(mi& plus1) {
	mi::iterator itr;
	cout << "Key" << "\t" << "Value" << endl;
	/*for (itr = plus1.begin(); itr != plus1.end(); itr++) {
		cout << itr->first << "\t" << itr->second << endl;
	}*/

	// Way 2: Using range-based for loop
	for (pair<const int, int>& p : plus1) {
		cout << p.first << "\t" << p.second << endl;
	}

	/*	for (auto [key, value] : plus1) {
			cout << key << "\t" << value << endl;
		}*/
}

static void print_crush_map(map<string, vector<string>>& crush_map) {
	cout << "Student" << "\t\t" << "Crushes" << endl;
	for (map<string, vector<string>>::iterator itr = crush_map.begin(); itr != crush_map.end(); itr++) {
		cout << itr->first << "\t\t";
		for (string crush : itr->second) {
			cout << crush << " ";
		}
		cout << endl;
	}
}

static void map_populate(map<string, vector<string>>& crush_map) {
	crush_map["Divyam"] = { "Jivesh", "Priyanshi", "Osheen", "Rishita", "Saurabh" };
	crush_map["Ronak"] = { "Divyam","Rishita" };
	crush_map["Ayush"] = { "Osheen", "Saurabh" };
	crush_map["Tanishq"] = { "Rishita" };
	crush_map["Anushka"] = { "Jivesh", "Saurabh" };
}

static void distinct_count(vector<int> arr) {
	map<int, int> frequency_map;
	for (int num : arr) {
		frequency_map[num]++;
	}

	cout << "Element" << "\t" << "Frequency" << endl;

	for (pair <const int, int>& p : frequency_map) {
		if (p.second == 1) {
			cout << p.first << "\t";
		}
	}
}

int main() {
	// Create a map to key and their corresponding values
	/*mi plus1;
	populate_map(plus1);
	print_map(plus1);*/

	map<string, vector<string>> crush_map;
	map_populate(crush_map);
	print_crush_map(crush_map);
	cout << endl;
	distinct_count({ 1,2,0,1,0,2 , 3 , 5 });
	return 0;
}