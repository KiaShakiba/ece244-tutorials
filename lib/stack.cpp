// stack.cpp

#include <iostream>
#include <sstream>
#include <ece244/stack.hpp>

std::string Stack::id() const {
	std::stringstream ss;
	ss << "stack<" << this->size() << ">";
	return ss.str();
}

void Stack::push(int data) {
	this->push_front(data);
}

Node* Stack::pop() {
	return this->pop_front();
}
