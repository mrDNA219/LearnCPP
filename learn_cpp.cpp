#include "my_functions.h"
#include <iostream>
#include <chrono>
#include <cstdint>
#include <cmath>



int main() {	

	auto start = std::chrono::high_resolution_clock::now();


	//Start





	//End

	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double, std::milli> duration = end - start;
	std::cout << "\nProgram time: " << duration.count() << "ms\n";


	return EXIT_SUCCESS;
}