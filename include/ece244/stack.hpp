// linked_list.hpp

#pragma once

#include <iostream>

using namespace std;

struct Node {
	int data;
	struct Node* next;
};

class Stack {
private:
	Node* head;

public:
	Stack();
	~Stack();

	bool is_empty() const;
	void push(int);
	Node* pop();
};
