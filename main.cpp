// main.c2p

#include <iostream>
#include <ece244/queue.hpp>

using namespace std;

int main() {
	Queue q;

	q.push(5);
	q.push(4);
	q.push(3);

	while (!q.is_empty()) {
		Node* node = q.pop();
		std::cout << node->data << std::endl;
	}

	return 0;
}
