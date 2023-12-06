// hash_table.cpp

#include <ece244/hash_table.hpp>

HashTable::HashTable(int size) {
	this->size = size;
	this->table = new Entry*[size];

	for (int i=0; i<this->size; i++) {
		this->table[i] = nullptr;
	}
}

HashTable::~HashTable() {
	delete this->table;
}

void HashTable::insert(std::string data) {
	Entry* entry = new Entry;
	entry->data = data;

	int hash = hash_string(data);
	int index = hash % this->size;

	this->table[index] = entry;
}

bool HashTable::exists(std::string data) {
	int hash = hash_string(data);
	int index = hash % this->size;

	return this->table[index] != nullptr;
}

void HashTable::remove(std::string data) {
	int hash = hash_string(data);
	int index = hash % this->size;

	if (this->table[index] == nullptr) {
		return;
	}

	delete this->table[index];
	this->table[index] = nullptr;
}























