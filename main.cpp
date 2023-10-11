// main.cpp

#include <iostream>
#include <ece244/linked_list.hpp>
#include <ece244/struct_test.hpp>

int main() {
	LinkedList* list = new LinkedList();

	list->push_front(5);

	return 0;
}

/*
 * The C++ way
int main() {
	int* nums = new int[5];

	for (int i=0; i<5; i++) {
		nums[i] = i;
		std::cout << nums[i] << std::endl;
	}

	delete [] nums;
	nums = nullptr;

	return 0;
}
*/

/*
 * The C way
int main() {
	int* nums = (int*)malloc(5 * sizeof(int));

	for (int i=0; i<5; i++) {
		nums[i] = i;
		std::cout << nums[i] << std::endl;
	}

	free(nums);
	nums = NULL;

	return 0;
}
*/
