// main.c2p

#include <iostream>
#include <ece244/linked_list.hpp>
#include <ece244/simple_class.hpp>
#include <cmath>

using namespace std;

int main() {
	LinkedList l1;

	l1.push_back(1);
	l1.push_back(2);
	l1.push_back(3);

	l1.print_rec();

	return 0;
}
