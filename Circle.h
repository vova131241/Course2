#pragma once
#include <iostream>

class Circle
{
	private:
		float x, y, R;
		const double PI = 3.141592653589793;

	public:
		~Circle(){}
		Circle(){}
		Circle(float x, float y, float R) {
			SetX(x);
			SetY(x);
			SetRadius(x);
		}

		Circle(Circle& c) {
			SetX(c.x);
			SetY(c.y);
			SetRadius(c.R);
		}

		void SetX(float value) {
			x = value;
		}
		void SetY(float value) {
			y = value;
		}
		void SetRadius(float value) {
			R = value;
		}
		float GetX() {
			return x;
		}
		float GetY() {
			return y;
		}
		float GetRadius() {
			return R;
		}

		void Display() {
			std::cout << "X => " << GetX() << " / " << "Y => " << GetY() << "  Radius: " << GetRadius() << std::endl;
		}

		float CalculateArea() {
			return PI * R * R;
		}

		float CalculateLenght() {
			float diamentr = GetRadius() * 2;
			return PI * diamentr;
		}
};

