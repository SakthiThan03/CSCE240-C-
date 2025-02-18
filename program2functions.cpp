//Copyright Sakthi Thanigai 2/17/25
#include "program2functions.h"

bool IsSquare(int num) {
    if (num < 0) return false; //Negative numbers don't have perfect squares
    int root = static_cast<int>(sqrt(num));
    return root * root == num; //Checks that squaring root gives original num
}