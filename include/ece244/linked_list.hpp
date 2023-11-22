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
	int num_nodes = 0;

public:
	LinkedList();
	LinkedList(const LinkedList&);

	~LinkedList();

	virtual std::string id() const;

	bool is_empty() const;
	int size() const;

	void push_front(int);
	void push_back(int);

	Node* pop_front();
	Node* pop_back();

	void remove(int);
	void print() const;

	friend ostream& operator<<(
		ostream& stream,
		const LinkedList& list
	) {
		stream << list.id() << " ";

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
