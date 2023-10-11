// main.cpp

#include <iostream>
#include <ece244/linked_list.hpp>
#include <ece244/struct_test.hpp>

int main() {
	int num = 5;
	int* ptr = &num;

	std::cout << "(before) num = " << num << std::endl;

	ptr += 8;
	*ptr += 3;

	std::cout << "(after) num = " << num << std::endl;

	return 0;
}
