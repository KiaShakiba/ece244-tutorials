// main.c2p

#include <array>
#include <chrono>
#include <algorithm>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <ece244/linked_list.hpp>

using namespace std;

#define N 100000

uint64_t timestamp();

int main() {
	srand(time(NULL));

	LinkedList list;
	int array[N];

	std::array<int, N> numbers;

	for (int i=0; i<N; i++) {
		int num = rand() % 10000;

		list.push_back(num);
		array[i] = num;

		numbers[i] = num;
	}

	std::sort(numbers.begin(), numbers.end());

	uint64_t list_total_time = 0;
	uint64_t array_total_time = 0;

	for (int i=0; i<N; i++) {
		int num_to_remove = numbers[i];

		// remove num from list and time it
		uint64_t list_start = timestamp();
		list.remove(num_to_remove);
		uint64_t list_end = timestamp();

		list_total_time += list_end - list_start;

		// remove num from array and time it
		uint64_t array_start = timestamp();
		for (int j=0; j<N; j++) {
			if (array[j] == num_to_remove) {
				// we found the index, remove it
				for (int k=j+1; k<N; k++) {
					array[k-1] = array[k];
				}
			}
		}
		uint64_t array_end = timestamp();

		array_total_time += array_end - array_start;
	}

	std::cout << "N: " << N << std::endl;
	std::cout << "List total time: " << list_total_time << std::endl;
	std::cout << "Array total time: " << array_total_time << std::endl;

	return 0;
}

uint64_t timestamp() {
	return std::chrono::duration_cast<std::chrono::nanoseconds>(
		std::chrono::system_clock::now().time_since_epoch()
	).count();
}
