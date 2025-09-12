#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_2/lab_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab2test
{
	TEST_CLASS(lab2test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int p = 1;
			int q = 0;
			int r = 0;

			int xValue = CalculateXValue(q, r);
			int imp = CalculateImp(p, q, r);
			int actual = 0;
			Assert::AreEqual(imp, actual);
		}
	};
}
