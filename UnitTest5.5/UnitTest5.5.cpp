#include "pch.h"
#include "CppUnitTest.h"
#include "../laba5.5/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int n = 2;
			int i = 6;
			int k = 4;
			int actual = f(n, i, k);
			int expected = 1;
			Assert::AreEqual(expected, actual, 0.0001);
		}
	};
}
