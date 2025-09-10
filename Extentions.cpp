#include "Fraction.h"
#include <cmath>

using namespace std;

long Fraction::Sum() {
    long result = _first * 1000 + (_first >= 0 ? _second : -_second);
    return result;
}

long Fraction::Miltiply() {
    long result = _first * 1000 + _second;

    long full_result = result * result;
    long whole = full_result / 1000000;
    unsigned short frac = std::abs((full_result / 1000) % 1000);

    return whole * 1000 + frac; 
}

long Multiply(Fraction& a, Fraction& b) {
    long num1 = a._first * 1000 + a._second;
    long num2 = b._first * 1000 + b._second;

    long result = num1 * num2;

    long whole = result / 1000000;
    unsigned short frac = std::abs((result / 1000) % 1000);

    return whole * 1000 + frac;
}