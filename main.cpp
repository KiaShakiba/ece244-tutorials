// main.c2p

#include <iostream>
#include <ece244/linked_list.hpp>
#include <ece244/simple_class.hpp>

using namespace std;

int main() {
	LinkedList l1;

	l1.push_back(1);
	l1.push_back(2);
	l1.push_back(3);

	LinkedList l2;

	l1.push_back(4);

	cout << "l1: [" << l1 << "]" << std::endl;
	cout << "l2: [" << l2 << "]" << std::endl;

	return 0;
}
