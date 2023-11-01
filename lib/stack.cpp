// linked_list.cpp

#include <iostream>
#include <ece244/stack.hpp>

// default constructor
Stack::Stack() {
	this->head = nullptr;
}

Stack::~Stack() {
	while (!this->is_empty()) {
		Node *node_to_free = this->head;
		this->head = this->head->next;
		delete node_to_free;
	}
}

bool Stack::is_empty() const {
	return this->head == nullptr;
}

void Stack::push(int data) {
	Node* node = new Node;

	node->data = data;
	node->next = this->head;

	this->head = node;
}

Node* Stack::pop() {
	if (this->is_empty()) {
		return nullptr;
	}

	Node* node_to_remove = this->head;
	this->head = node_to_remove->next;

	return node_to_remove;
}











