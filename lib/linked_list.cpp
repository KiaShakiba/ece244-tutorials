// linked_list.cpp

#include <iostream>
#include<ece244/linked_list.hpp>

LinkedList::LinkedList() {
	std::cout << "LinkedList constructor" << std::endl;

	this->head = nullptr;
}

LinkedList::~LinkedList() {
	std::cout << "LinkedList destructor" << std::endl;

	while (!this->is_empty()) {
		Node *node_to_free = this->head;
		this->head = this->head->next;
		delete node_to_free;
	}
}

bool LinkedList::is_empty() const {
	return this->head == nullptr;
}

void LinkedList::push_front(int data) {
	// allocate memory for and initialize node
	Node* node = new Node;
	node->data = data;
	node->next = this->head;

	this->head = node;
}

void LinkedList::print() const {
	Node* current = this->head;

	while (current != nullptr) {
		std::cout << current->data;

		if (current->next != nullptr) {
			std::cout << ", ";
		}

		current = current->next;
	}

	std::cout << std::endl;
}
