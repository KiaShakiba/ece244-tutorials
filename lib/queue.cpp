// queue.cpp

#include <iostream>
#include <sstream>
#include<ece244/queue.hpp>

std::string Queue::id() const {
	std::stringstream ss;
	ss << "queue<" << this->size() << ">";
	return ss.str();
}

void Queue::push(int data) {
	this->push_front(data);
}

Node* Queue::pop() {
	return this->pop_back();
}
