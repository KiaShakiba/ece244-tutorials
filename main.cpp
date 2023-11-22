// main.cpp

#include <iostream>
#include <ece244/queue.hpp>
#include <ece244/stack.hpp>

using namespace std;

int main() {
	Queue queue;

	queue.push(1);
	queue.push(2);
	queue.push(3);

	std::cout << "Initial: " << queue << std::endl;

	queue.pop();

	std::cout << "Updated: " << queue << std::endl;

	return 0;
}
