#include <iostream>
using namespace std;

#define forLL(curr) for (Node* curr = head; curr != nullptr; curr = curr->next)

struct Node {
public:
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

struct LinkedList {
public:
    struct Node* head;
    LinkedList() : head(nullptr) {}
    LinkedList(Node* h) : head(h) {}

    void inserNodeTail(int val);
    void deleteNode(int pos);
    void print() const;
    bool search(int target) const;
    int length() const;
};

void LinkedList::inserNodeTail(int val) {
    if (head == nullptr) {
        head = new Node(val);
        return;
    }
    Node* curr = head;
    while (curr->next != nullptr) {
        curr = curr->next;
    }
    curr->next = new Node(val);
}

void LinkedList::print() const {
    forLL(curr) {
        cout << curr->data << " ";
    }
    cout << endl;
}

int LinkedList::length() const {
    int count = 0;
    forLL(curr) {
        count++;
    }
    return count;
}

bool LinkedList::search(int target) const {
    forLL(curr) {
        if (curr->data == target) {
            return true;
        }
    }
    return false;
}

void LinkedList::deleteNode(int pos) {
    if (!head) {
		return;
    }

    if (pos < 1) {
		return;
    }

	int  _length = length();

	if (pos > _length) {
		return;
	}

	if (pos == 1) {
		Node* temp = head;
		head = head->next;
		delete temp;
		return;
	}
    struct Node* curr = head;
	for (int i = 0; i < pos - 2; i++) {
		curr = curr->next;
	}
	Node* temp = curr->next;
	curr->next = curr->next->next;
	delete temp;
}

int main() {
    LinkedList list;
    for (int i = 1; i <= 8; i++) {
        list.inserNodeTail(i);
    }
	list.deleteNode(3);
    list.inserNodeTail(9);
    list.deleteNode(1);
	list.deleteNode(0);
	list.deleteNode(8);
	list.deleteNode(7);
    list.print();
    return 0;
}