// linked_list.cpp

#include <iostream>
#include<ece244/linked_list.hpp>

void print_rec_helper(Node*);

// default constructor
LinkedList::LinkedList() {
	this->head = nullptr;
}

// copy constructor
LinkedList::LinkedList(const LinkedList& other) {
	this->head = nullptr;
	Node* current = other.head;

	while (current != nullptr) {
		this->push_back(current->data);
		current = current->next;
	}
}

LinkedList::~LinkedList() {
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

void LinkedList::push_back(int data) {
	if (this->is_empty()) return this->push_front(data);

	Node* last = this->head;
	while (last->next != nullptr) last = last->next;

	Node* node = new Node;

	node->data = data;
	node->next = nullptr;

	last->next = node;
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

void LinkedList::print_rec() const {
	print_rec_helper(this->head);
}

void print_rec_helper(Node* node) {
	if (node == nullptr) {
		std::cout << "NULL" << std::endl;
		return;
	}

	std::cout << node->data << " -> ";
	print_rec_helper(node->next);
}



















