// linked_list.hpp

#pragma once

#include <iostream>

using namespace std;

struct Node {
	int data;
	struct Node* next;
};

class Queue {
private:
	Node* head;

public:
	Queue();
	~Queue();

	bool is_empty() const;
	void push(int);
	Node* pop();
};
