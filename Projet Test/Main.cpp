
#include <iostream>
#include "Function.hpp"

void compute_table(int table, int output[11]) {

	for (int i = 0; i <= 10; ++i) {
		output[i] = i * table;
	}
}

void display_table(int table[11]) {

	for (int i = 0; i <= 10; ++i) {
		std::cout << i << " x " << table[1] << " = " << table[i] << std::endl;
	}
}

int main() {

	int table[11] = {0};

	compute_table(9, table);
	
	display_table(table);

	return 0;
}

