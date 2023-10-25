#include <string>

using namespace std;

class Follower {
private:
	string name;
	int age;

public:
	Follower(const string& _name, int _age) {
		name = _name;
		age = _age;
	}

	string get_name() const {
		return name;
	}

	int get_age() const {
		return age;
	}
};

class Vtuber {
private:
	// Vtuber Name
	string name;
	// Follower array with a variable size, each element should be a dynamically
	// allocated object of class Follower.
	Follower** followers;
	// The size of follower array.
	int follower_max;
	// Number of followers
	int follower_num;

public:
	Vtuber(const string& _name);
	~Vtuber();

	void insert_follower(const string& follower_name, int follower_age);
	void remove_follower(const string& follower_name);
};
