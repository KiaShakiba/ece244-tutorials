// linked_list.cpp

#include <iostream>
#include <sstream>
#include<ece244/linked_list.hpp>

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
/*
std::string LinkedList::id() const {
	std::stringstream ss;
	ss << "list<" << this->size() << ">";
	return ss.str();
}
*/

bool LinkedList::is_empty() const {
	return this->head == nullptr;
}

int LinkedList::size() const {
	return this->num_nodes;
}

void LinkedList::push_front(int data) {
	this->num_nodes++;

	// allocate memory for and initialize node
	Node* node = new Node;

	node->data = data;
	node->next = this->head;

	this->head = node;
}

void LinkedList::push_back(int data) {
	if (this->is_empty()) return this->push_front(data);

	this->num_nodes++;

	Node* last = this->head;
	while (last->next != nullptr) last = last->next;

	Node* node = new Node;

	node->data = data;
	node->next = nullptr;

	last->next = node;
}

Node* LinkedList::pop_front() {
	if (this->is_empty()) return nullptr;

	this->num_nodes--;

	Node* to_return = this->head;
	this->head = to_return->next;

	return to_return;
}

Node* LinkedList::pop_back() {
	if (this->is_empty()) return nullptr;

	this->num_nodes--;

	// I know I have at least one node
	if (this->head->next == nullptr) {
		// I only have one node
		return this->pop_front();
	}

	// I know I have at least two nodes
	Node* prev_to_return = this->head;
	while (prev_to_return->next->next != nullptr) {
		prev_to_return = prev_to_return->next;
	}

	// prev_to_return points to the second last node
	Node* to_return = prev_to_return->next;
	prev_to_return->next = nullptr;

	return to_return;
}

void LinkedList::remove(int data) {
	if (this->is_empty()) return;

	if (this->head->data == data) {
		// remove head
		Node* to_remove = this->head;
		this->head = this->head->next;
		delete to_remove;

		this->num_nodes--;

		return;
	}

	Node* prev = this->head;
	while (prev->next->data != data) {
		prev = prev->next;
	}

	if (prev->next != nullptr) {
		// we found the node, delete
		Node* to_remove = prev->next;
		prev->next = prev->next->next;
		delete to_remove;

		this->num_nodes--;
	}
}

void LinkedList::print() const {
	std::cout << this->id() << " ";

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



















