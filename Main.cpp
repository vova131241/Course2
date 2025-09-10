#include "Fraction.h"
#include <iostream>

using namespace std;

int main() {
    Fraction f1;
    f1.SetFirst(-12);
    f1.SetSecond(345);

    Fraction f2;
    f2.SetFirst(3);
    f2.SetSecond(7);

    long sum = Fraction::Sum(f1, f2);
    long product = Multiply(f1, f2);

    std::cout << "f1 = "; f1.Print();
    std::cout << "f2 = "; f2.Print();

    std::cout << "Sum = " << sum / 1000 << "."<< std::abs(sum % 1000) << std::endl;
    std::cout << "Product = " << product / 1000 << "." << std::abs(product % 1000) << std::endl;

    return 0;
}