#include <iostream>

 
#define MODE 1

#ifndef MODE
#error You need determine the value of MODE
#endif

#if MODE == 1
double add(double a, double b) {
	return a + b;
}
#endif


int main() {

#if MODE == 0
	std::cout << "Working in training mode";
#elif MODE == 1
	double a, b;
	std::cout << "Working in fight mode" << std::endl;
	std::cout << "Input first number:";
	std::cin >> a;
	std::cout << "Input second number:";
	std::cin >> b;
	std::cout << add(a,b);
#else
	std::cout << "Unknown mode";
#endif

	return 0;
}

