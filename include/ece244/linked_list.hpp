// linked_list.hpp

#pragma once

struct Node {
	int data;
	struct Node* next;
};

class LinkedList {
private:
	Node* head;

public:
	LinkedList();
	~LinkedList();

	bool is_empty() const;
	void push_front(int);
	void print() const;
};
