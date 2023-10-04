#include <ece244/struct_test.hpp>

int Test::get_data() {
	return this->data;
}

void Test::set_data(int data) {
	if (!this->data) {
		this->data = data;
	}
}
