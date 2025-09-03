#pragma once
#include <iostream>

class Money
{
	private:
		int _first;
		int _second;

	public:
		void SetFirst(int value) {
			if (value % 5 == 0 || value == 1 || value == 2)
				_first = value;
			else
				throw exception("bad input");
		}

		void SetSecond(int value) {
			if (value > 0)
				_second = value;
			else
				throw exception("bad input");

			_second = value;
		}
		void Display(){
			std::cout << "Face value = " << _first << " Count = " << _second << std::endl;
		}
		int Summ() {
			return _first * _second;
		}
};

