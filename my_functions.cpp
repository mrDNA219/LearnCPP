#include "my_functions.h"
#include <iostream>
#include <iomanip>
#include <cstdint>
#include <bitset>
#include <string>
#include <type_traits>

int getNumber() {
	std::cout << "Please enter an integer: ";
	int num{};
	std::cin >> num;
	return num;
}

void writeAnswer(int num) {

	std::cout << "Answer: " << num << "\n";	
}

void printSizeOf() {

	std::cout << std::left;
	std::cout << "The sizeof operator run on various data types...\n";
	std::cout << std::setw(16) << "bool: " << sizeof(bool) << " bytes\n";
	std::cout << std::setw(16) << "char: " << sizeof(char) << " bytes\n";
	std::cout << std::setw(16) << "int: " << sizeof(int) << " bytes\n";
	std::cout << std::setw(16) << "long: " << sizeof(long) << " bytes\n";
	std::cout << std::setw(16) << "long long: " << sizeof(long long) << " bytes\n";
	std::cout << std::setw(16) << "float: " << sizeof(float) << " bytes\n";
	std::cout << std::setw(16) << "double: " << sizeof(double) << " bytes\n";
	std::cout << std::setw(16) << "long double: " << sizeof(long double) << " bytes\n";
}

void signedIntegers() {

	std::cout << "Signed integers use two's complement binary representation.\n";
	std::cout << "the following is an example of overflow with a signed integer of int type.\n";
	int x{ 2147483647 };
	std::cout << x << "\n";
	std::cout << "x + 1 is: " << (x + 1) << "\n";
}

//void unsignedIntegers() {
//	
//	unsigned int a{ 2 };
//	unsigned int b{ 3 };
//	std::cout << "Don't use unsigned integers... 2 - 3 = " << (a - b) << "\n";
//	int c{ -1 };
//	std::cout << "Secondly, and more insidiously, unexpected behavior can result when you mix signed and unsigned integers.\n";
//	std::cout << "In C++, if a mathematical operation (e.g. arithmetic or comparison) has one signed integer and one unsigned integer, the signed integer will usually be converted to an unsigned integer.\n";
//	std::cout << "And the result will thus be unsigned. For example:\n";
//
//	if (c < a) {
//		std::cout << c << " is less than " << a << "\n";
//	}
//	else {
//		std::cout << a << " is less than " << c << "\n";
//	}
//}

void fixedWidthIntegers() {

	std::cout << "int x is initialized as 32767...on an architecture where int is 16 bits this will overflow as follows:\n";	
	int x{ 32767 };
	x = x + 1;
	std::cout << x << '\n';
	std::cout << "A solution for this is to use fixed-width integers using the <cstdint> library\n";
	std::cout << "Now we will try to print std::int8_t x{65} but it will likely not work because on this machine it is an alias for signed char \n";
	std::int8_t y{ 65 };
	std::cout << "int_8 y{65} is: " << y << '\n';
	std::cout << "You can also use least and fast to combat downsides of fixed width...\n";
	std::cout << "least 8:  " << sizeof(std::int_least8_t) * 8 << " bits\n";
	std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
	std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
	std::cout << '\n';
	std::cout << "fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits\n";
	std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
	std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";
	std::cout << '\n';
	std::cout << "Avoid using fast and least integral types because they exhibit varying behaviours on different architectures\n";
	std::int32_t z{ 1080 };
	std::cout << "z is: " << z << '\n';

}

void floatingPointNumbers() {

	std::cout << std::boolalpha; // print bool as true or false rather than 1 or 0
	std::cout << "print true if floating point types are compatible with IEEE 754\n";
	std::cout << "float: " << std::numeric_limits<float>::is_iec559 << '\n';
	std::cout << "double: " << std::numeric_limits<double>::is_iec559 << '\n';
	std::cout << "long double: " << std::numeric_limits<long double>::is_iec559 << '\n';

	std::cout << std::setprecision(17);
	double d1{ 1.0 };
	std::cout << d1 << '\n';
	double d2{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 }; // should equal 1.0
	std::cout << d2 << '\n';

	std::cout << "let's print some signed infinities using division by zero!\n";
	double zero{ 0.0 };
	double posinf{ 5.0 / zero };
	double neginf{ -5.0 / zero };
	std::cout << posinf << '\n';
	std::cout << neginf << '\n';


}

void booleanValues() {
	std::cout << std::boolalpha;
	std::cout << true << '\n'; // true evaluates to 1
	std::cout << !true << '\n'; // !true evaluates to 0

	bool b{ false };
	std::cout << b << '\n'; // b is false, which evaluates to 0
	std::cout << !b << '\n'; // !b is true, which evaluates to 1
}

void print(int x) {
	std::cout << x << '\n';
}

void characterCaster() {
	std::cout << "Please enter a single character: \n";
	char input{};
	std::cin >> input;	
	int ascii{ input };
	std::cout << "You entered '" << input << "', which has ASCII code " << ascii << ".\n";
}

double getDouble() {
	std::cout << "Please enter a floating point number: \n";
	double x{};
	std::cin >> x;
	return x;
}

char getOperator() {
	std::cout << "Please enter an operator: \n";
	char op{};
	std::cin >> op;
	return op;
}

void printSolution(double x, double y, char op) {
	double result{};
	if (op == '+') {
		result = x + y;
	} else if (op == '-') {
		result = x - y;
	} else if (op == '*') {
		result = x * y;
	} else if (op == '/') {
		result = x / y;
	}
	else {
		return;
	}
	std::cout << x << " " << op << " " << y << " is " << result;
}

int16_t getTowerHeight() {
	std::cout << "Loading Ball Drop Simulator... \n";
	std::cout << "Please enter the height of the tower (in meters): \n";
	int16_t height{};
	std::cin >> height;
	return height;
}

void getBallHeight(int seconds, int16_t height) {
	double displacement{height - (9.8 * ( seconds * seconds) / 2)};
	if (displacement > 0) {
		std::cout << "At " << seconds << " seconds, the ball is at height: " << displacement << " meters.\n";
	}
	else {
		std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
	}
}

void ballDropSimulator() {
	int16_t height{ getTowerHeight() };
	for (int i = 0; i < 20; i++) {
		getBallHeight(i, height);
	}
}

void chapter4Quiz() {	
	double x{ getDouble() };
	double y{ getDouble() };
	char op{ getOperator() };
	printSolution(x, y, op);
}

std::bitset<8> binaryAdd(std::bitset<8> byte1, std::bitset<8> byte2) {
	std::bitset<8> sum{};
	bool carry{ false };
	for (int i = 0; i < 8; i++) {
		bool bitA{ byte1[i] };
		bool bitB{ byte2[i] };
		sum[i] = bitA ^ bitB ^ carry;
		carry = (bitA && bitB) || (bitA && carry) || (bitB && carry);
	}
	return sum;
}

void standardString() {

	std::cout << "Enter your full name: \n"; std::string name{};
	std::getline(std::cin >> std::ws, name);
	int nameLength{ static_cast<int>(name.length())};
	
	std::cout << "Enter your age: \n";
	int age{};
	std::cin >> age;

	std::cout << "Your age + length of name is: " << (nameLength + age) << '\n';
}

std::string getName( int num) {
	std::cout << "Enter the name of person " << num << ": \n";
	std::string name{};
	std::getline(std::cin >> std::ws, name);
	return name;
}

int getAge(std::string_view name) {
	std::cout << "Enter the age of " << name << ": \n";
	int age{};
	std::cin >> age;
	return age;
}

void printOldest(std::string_view name1, int age1, std::string_view name2, int age2) {
	if (age1 > age2) {
		std::cout << name1 << " (age " << age1 << ") is older than " << name2 << " (age " << age2 << "). \n";
	}
	else {
		std::cout << name2 << " (age " << age2 << ") is older than " << name1 << " (age " << age1 << "). \n";
	}
}

void chapter5Quiz() {
	std::string name1{ getName(1) };
	int age1{ getAge(name1) };

	std::string name2{ getName(2) };
	int age2{ getAge(name2) };

	printOldest(name1, age1, name2, age2);


}

