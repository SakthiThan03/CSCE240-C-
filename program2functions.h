//Copyright Sakthi Thanigai 02/17/25
#ifndef PROGRAM2FUNCTIONS_H
#define PROGRAM2FUNCTIONS_H

#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

// Function Prototypes
bool IsSquare(int num);
bool IsPerfect(int num);
bool IsVowel(char c, bool yIsVowel = true);
bool IsConsonant(char c, bool yIsConsonant = true);
int ToDigit(char c);
int Range(int& x, int& y);
int DigitInPosition(double num, int position);


#endif