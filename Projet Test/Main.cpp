
#include <iostream>
#include "Function.hpp"

int main() {

	int a = 0;
	float b = 0;

	int* p_int = &a;
	float* p_float = &b;

	std::cout << "Valeur de a = " << a << " et son adresse : " << p_int << std::endl;
	std::cout << "Valeur de b = " << b << " et son adresse : " << p_float << std::endl;

	return 0;
}

