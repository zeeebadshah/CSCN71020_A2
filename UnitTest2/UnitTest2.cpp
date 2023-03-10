#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* length);

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(LengthSetter99)
		{
			int length = 0;
			setLength(99, &length);
			Assert::AreEqual(99, length);
		}
		TEST_METHOD(LengthSetterInvalid100)
		{
			int length = 0;
			setLength(100, &length);
			Assert::AreEqual(100, length);
		}
		TEST_METHOD(LengthSetterInvalidNegative)
		{
			int length = 0;
			setLength(-60, &length);
			Assert::AreEqual(-60, length);
		}
			
		void setLength(int input, int* length) {
				if (input >= 1 && input <= 99) {
					*length = input;
				}
			}
		TEST_METHOD(WidthSetterInvalid100)
		{
			int width = 0;
			setWidth(100, &width);
			Assert::AreEqual(100, width);
		}
		TEST_METHOD(WidthSetterInvalid99)
		{
			int width = 0;
			setWidth(99, &width);
			Assert::AreEqual(99, width);
		}
		TEST_METHOD(WidthSetterInvalidNegative)
		{
			int width = 0;
			setWidth(-4, &width);
			Assert::AreEqual(-4, width);
		}
		void setWidth(int input, int* width) {
			if (input >= 1 && input <= 99) {
				*width = input;

			}
		}
	};
}
