// linked_list.hpp

#pragma once

#include <iostream>

using namespace std;

struct Node {
	int data;
	struct Node* next;
};

class LinkedList {
private:
	Node* head;

public:
	LinkedList();
	LinkedList(const LinkedList&);

	~LinkedList();

	bool is_empty() const;
	void push_front(int);
	void push_back(int);
	void print() const;

	friend ostream& operator<<(
		ostream& stream,
		const LinkedList& list
	) {
		Node* current = list.head;

		while (current != nullptr) {
			stream << current->data;

			// if there is a node after this one, output a comma
			if (current->next != nullptr) {
				stream << ", ";
			}

			current = current->next;
		}

		return stream;
	}
};
