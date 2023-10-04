// main.cpp

#include <iostream>
#include <ece244/linked_list.hpp>
#include <ece244/struct_test.hpp>

int main() {
	LinkedList list;

	list.push_front(3);
	list.push_front(2);
	list.push_front(1);

	std::cout << "is_empty: " << list.is_empty() << std::endl;

	list.print();

	return 0;
}

/*
int main() {
	Test test;

	test.data = 6;
	//test.set_data(5);

	std::cout << "Data: " << test.get_data() << std::endl;

	return 0;
}*/
