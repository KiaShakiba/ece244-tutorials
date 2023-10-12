// main.cpp

#include <iostream>
#include <ece244/linked_list.hpp>
#include <ece244/simple_class.hpp>

/*
 * Method 2
SimpleClass operator+(const SimpleClass& s1, const SimpleClass& s2) {
	return SimpleClass(s1.get_data() + s2.get_data());
}
*/

/*
 * Method 1
SimpleClass operator+(SimpleClass s1, SimpleClass s2) {
	return SimpleClass(s1.get_data() + s2.get_data());
}
*/

int main() {
	SimpleClass a (5);
	SimpleClass b (7);

	SimpleClass c = a + b;

	std::cout << "a get_data: "
		<< a.get_data() << std::endl;

	std::cout << "b get_data: "
		<< b.get_data() << std::endl;

	std::cout << "c get_data: "
		<< c.get_data() << std::endl;

	return 0;
}
