#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" void setLength(int , int* );
extern "C" void setWidth(int , int* );

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(setLen_test1)
		{
			int length = 25;
			setLength(69, &length);
			Assert::AreEqual(69, length);
		}
		TEST_METHOD(setLen_test2)
		{
			int length = 5;
			setLength(34, &length);
			Assert::AreEqual(34, length);
		}
		TEST_METHOD(setLen_test3)
		{
			int length = 12;
			setLength(77, &length);
			Assert::AreEqual(77, length);
		}

		TEST_METHOD(setWid_test1)
		{
			int width = 0;
			setWidth(25, &width);
			Assert::AreEqual(25, width);
		}
		TEST_METHOD(setWid_test2)
		{
			int width = 0;
			setWidth(50, &width);
			Assert::AreEqual(50, width);
		}
		TEST_METHOD(setWid_test3)
		{
			int width = 0;
			setWidth(99, &width);
			Assert::AreEqual(99, width);
		}
		
		
	};
}

