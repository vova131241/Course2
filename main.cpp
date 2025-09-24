#include <iostream>
#include "Complex.h"
#include "Circle.h"
using namespace std;

int main() {
	Circle c1;
	Circle c2(4, 5, 10);

	cout << "--------------------------------------------" << endl;
	cout << "Circle 1" << endl;
	c1.SetRadius(2);
	c1.SetX(50);
	c1.SetY(75);
	c1.Display();
	cout << "--------------------------------------------" << endl;
	cout << "LENGHT ->" << c1.CalculateLenght() << endl;
	cout << "Area ->" << c1.CalculateArea() << endl;
	cout << "--------------------------------------------" << endl;
	cout << endl;
	cout << endl;

	cout << "--------------------------------------------" << endl;
	cout << "Circle 2" << endl;
	c2.Display();
	cout << "--------------------------------------------" << endl;
	cout << "LENGHT ->" << c2.CalculateLenght() << endl;
	cout << "Area ->" << c2.CalculateArea() << endl;
	cout << "--------------------------------------------" << endl;


	cout << endl;
	cout << endl;
	cout << "--------------------------------------------" << endl;
	cout << "Circle 3" << endl;
	Circle c3(c1);
	c2.Display();
	cout << "--------------------------------------------" << endl;
	cout << "LENGHT ->" << c3.CalculateLenght() << endl;
	cout << "Area ->" << c3.CalculateArea() << endl;
	cout << "--------------------------------------------" << endl;

	return 0;
}