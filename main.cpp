// main.cpp

#include <iostream>
#include <ece244/queue.hpp>
#include <ece244/stack.hpp>

using namespace std;

int main() {
	LinkedList* my_list[3];

	LinkedList* list = new LinkedList();

	my_list[0] = new Queue;
	my_list[1] = new Stack;
	my_list[2] = new Queue;

	my_list[0]->push(1);
	my_list[1]->push(3);
	my_list[1]->push(2);
	my_list[1]->push(1);
	my_list[0]->push(5);

	my_list[0]->pop();
	my_list[1]->pop();

	for (int i=0; i<3; i++) {
		std::cout << *my_list[i] << std::endl;
	}

	return 0;
}
