// linked_list.hpp

#pragma once

#include <iostream>
#include <ece244/linked_list.hpp>

using namespace std;

class Stack : public LinkedList {
private:
	using LinkedList::push_front;
	using LinkedList::push_back;

	using LinkedList::pop_front;
	using LinkedList::pop_back;

	using LinkedList::remove;

public:
	std::string id() const override;

	void push(int);
	Node* pop();
};
