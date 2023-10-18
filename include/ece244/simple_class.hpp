// struct_test.hpp

#pragma once

class SimpleClass {
private:
	int data;

public:
	SimpleClass(int);

	int get_data() const;
	void set_data(int);

	// Method 4
	SimpleClass operator+(const SimpleClass& other) {
		return SimpleClass(this->data + other.data);
	}

	/*
	 * Method 3
	friend SimpleClass operator+(
		const SimpleClass& s1,
		const SimpleClass& s2
	) {
		return SimpleClass(s1.data + s2.data);
	}
	*/
};
