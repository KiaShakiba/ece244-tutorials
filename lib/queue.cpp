// linked_list.cpp

#include <iostream>
#include<ece244/queue.hpp>

// default constructor
Queue::Queue() {
	this->head = nullptr;
}

Queue::~Queue() {
	while (!this->is_empty()) {
		Node *node_to_free = this->head;
		this->head = this->head->next;
		delete node_to_free;
	}
}

bool Queue::is_empty() const {
	return this->head == nullptr;
}

void Queue::push(int data) {
	Node* node = new Node;

	node->data = data;
	node->next = this->head;

	this->head = node;
}

Node* Queue::pop() {
	if (this->is_empty()) {
		return nullptr;
	}

	// edge case: if the list only has one node
	if (this->head->next == nullptr) {
		Node* last = this->head;
		this->head = nullptr;
		return last;
	}

	// we know the list has at least two nodes
	Node* second_last = this->head;

	while (second_last->next->next != nullptr) {
		second_last = second_last->next;
	}

	Node* last = second_last->next;
	second_last->next = nullptr;

	return last;
}











