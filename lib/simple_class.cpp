#include <ece244/simple_class.hpp>

SimpleClass::SimpleClass(int data) {
	this->data = data;
}

int SimpleClass::get_data() const {
	return this->data;
}

void SimpleClass::set_data(int data) {
	if (data >= 0) {
		this->data = data;
	}
}
