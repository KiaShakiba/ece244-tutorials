#include <ece244/m2022q10.hpp>

// Part a
Vtuber::Vtuber (const string& _name) {
	this->name = _name;

	this->follower_max = 2;
	this->follower_num = 0;

	this->followers = new Follower*[this->follower_max];

	for (int i=0; i<this->follower_max; i++) {
		this->followers[i] = NULL;
	}
}

// Part d
Vtuber::~Vtuber() {
	for (int i=0; i<this->follower_max; i++) {
		if (this->followers[i] != NULL) {
			delete this->followers[i];
		}
	}

	delete [] this->followers;
}

// Part b
void Vtuber::insert_follower(
	const string& follower_name,
	int follower_age
) {
	this->follower_num++;

	// dynamically allocate a new follower
	Follower* follower = new Follower(
		follower_name,
		follower_age
	);

	for (int i=0; i<this->follower_max; i++) {
		if (this->followers[i] == NULL) {
			// we have an empty cell in the followers array
			// so add here
			this->followers[i] = follower;
			return;
		}
	}

	// if we get here, it means the followers array was
	// full, so we need to double its size etc...
	Follower** new_followers = new Follower*[2 * this->follower_max];

	// copy all values of the old followers array into the
	// new one
	for (int i=0; i<this->follower_max; i++) {
		new_followers[i] = this->followers[i];
	}

	// initialize the second half (empty) of the array to NULL
	for (int i=this->follower_max; i<this->follower_max * 2; i++) {
		new_followers[i] = NULL;
	}

	new_followers[this->follower_max] = follower;

	delete [] this->followers;

	this->followers = new_followers;
	this->follower_max *= 2;
}

// Part c
void Vtuber::remove_follower(const string& follower_name) {
	for (int i=0; i<this->follower_max; i++) {
		if (this->followers[i] != NULL && this->followers[i]->get_name() == follower_name) {
			// we found the follower, delete it
			delete this->followers[i];
			this->followers[i] = NULL;

			this->follower_num--;

			return;
		}
	}
}


















