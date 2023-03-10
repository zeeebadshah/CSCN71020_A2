#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" int getPerimeter(int ,int);
extern "C" int getArea(int, int);



namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(PerimeterTest)
		{
			int length = 5;
			int width = 6;
			int expectedPerimeter = 22;
			int actualPerimeter = getPerimeter(&length, &width);
			Assert::AreEqual(expectedPerimeter, actualPerimeter);
		}
		int getPerimeter(int* length, int* width) {
			int perimeter = 2 * (*length + *width);
			return perimeter;
		}
		TEST_METHOD(AreaTest)
		{
			int length = 10;
			int width = 10;
			int expectedArea = 100;
			int actualArea = getArea(&length, &width);
			Assert::AreEqual(expectedArea, actualArea);
		}
		int getArea(int* length, int* width) {
			int area = *length * *width;
			return area;
		}
	};
}
