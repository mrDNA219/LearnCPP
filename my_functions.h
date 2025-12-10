#pragma once
#include <cstdint>
#include <bitset>


int getNumber();
void writeAnswer(int num);
void printSizeOf();
void signedIntegers();
void unsignedIntegers();
void fixedWidthIntegers();
void floatingPointNumbers();
void booleanValues();
void print(int x);
void characterCaster();
double getDouble();
char getOperator();
void printSolution(double x, double y, char op);
void chapter4Quiz();
int16_t getTowerHeight();
void getBallHeight(int seconds, int16_t height);
void ballDropSimulator();
std::bitset<8> binaryAdd(std::bitset<8> byte1, std::bitset<8> byte2);
void standardString();
std::string getName(int num);
int getAge(std::string_view name);
void printOldest(std::string_view name1, int age1, std::string_view name2, int age2);
void chapter5Quiz();
std::int64_t powint_safe(std::int64_t base, int exp);

constexpr bool isEven(int x){
    return !(x % 2);
}
void chapter6_3Quiz();

//custom implementation of abs function (std::abs is not a constexpr function until C++23)
template <typename Abs>
constexpr Abs constAbs(Abs x){
	return (x < 0 ? -x : x);
}

constexpr bool epsilonRelative(double x, double y, double epsilonRel){
	return (constAbs(x - y) <= (std::max(constAbs(x), constAbs(y)) * epsilonRel));
}

constexpr bool epsilonAbsRel(double x, double y, double epsilonRel, double epsilonAbs){
	if(constAbs(x - y) <= epsilonAbs){
		return true;
	}

	return epsilonRelative(x, y, epsilonRel);
}

std::string_view getQuantityPhrase(int quantity);
std::string_view getApplesPluralized(int quantity);
void chapter6Quiz();




