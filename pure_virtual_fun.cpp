#include<iostream>
using namespace std;

// Any class that contains at least one pure virtual function is called an abstract class.
class Hobby {
	public:
		virtual void leisure_time() = 0; // Pure virtual function, making Hobby an abstract class
};

class Dancing : public Hobby {
public:
	void leisure_time() {
		cout << "Hobby: Dancing" << endl;
	}
};

class Movies : public Hobby {
public:
	void leisure_time() {
		cout << "Hobby: Movies" << endl;
	}
};

class Reading : public Hobby {
public:
	void leisure_time() {
		cout << "Hobby: Reading" << endl;
	}
};

class Chess : public Hobby {
public:
	void leisure_time() {
		cout << "Hobby: Chess" << endl;
	}
};

void playground(Hobby* hobby) {
	hobby->leisure_time();
}

int main() {
	Hobby *c = new Reading();
	//c->leisure_time(); // Calls Reading's leisure_time()

	Hobby* s = new Dancing();
	//s->leisure_time(); // Calls Dancing's leisure_time()

	Hobby* m = new Movies();
	//m->leisure_time(); // Calls Movies's leisure_time()

	Hobby* y = new Chess();
	//y->leisure_time(); // Calls Chess's leisure_time()

	Hobby* ptr[4] = { c, s, m, y };
	for (int i = 0; i < 5; i++)
	{
		ptr[i]->leisure_time();
	}

	return 0;