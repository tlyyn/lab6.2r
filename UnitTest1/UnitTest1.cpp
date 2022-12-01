#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.2r/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int x;

			const int n = 8;
			int a[n] = { 22, 22, 21, 10, 9, 13, 12, 6 };

			int max = 22;
			int min = 6;

			x = Average(a, n, 1, 0, 0);

			Assert::AreEqual(x, 14);
		}
	};
}

