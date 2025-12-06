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
