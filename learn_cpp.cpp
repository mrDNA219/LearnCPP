#include "my_functions.h"
#include <iostream>
#include <chrono>
#include <cstdint>



int main() {	

	auto start = std::chrono::high_resolution_clock::now();

	//Start
	int x{-7};
	std::cout << x % 6;


	//End

	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double, std::milli> duration = end - start;
	std::cout << "\nProgram time: " << duration.count() << "ms\n";

	
	return EXIT_SUCCESS;
}