#include "pch.h"
#include "CppUnitTest.h"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(getPerimeter_Test)
		{
			int l = 8;
			int w = 5;
			int expectedresult = 26;
			int actualresult = getPerimeter(&l, &w);
			Assert::AreEqual(expectedresult, actualresult);
		}

		TEST_METHOD(getArea_Test)
		{

			int l = 8;
			int w = 5;
			int expectedresult = 40;
			int actualresult = getArea(&l, &w);
			Assert::AreEqual(expectedresult, actualresult);

		}

	};
}

