// hash_table.hpp

#include <string>

struct Entry {
	std::string data;
};

int hash_string(std::string);

class HashTable {
private:
	int size;
	Entry** table;

public:
	HashTable(int);
	~HashTable();

	void insert(std::string);
	bool exists(std::string);
	void remove(std::string);
};
