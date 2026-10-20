#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Arseniy\Desktop\Project6\Laba5.2\Laba5.2\Laba5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestA_SecondTerm)
		{
			double a = -0.5;
			A(0.5, 2, a);
			Assert::AreEqual(-0.125, a, 1e-9);
		}

		TEST_METHOD(TestA_ThirdTerm)
		{
			double a = -0.125;
			A(0.5, 3, a);
			Assert::AreEqual(-1.0 / 24, a, 1e-9);
		}

		TEST_METHOD(TestS_Sum)
		{
			int n = 0;
			double s = 0;
			S(0.5, 0.01, n, s);
			Assert::AreEqual(5, n);
			Assert::AreEqual(-0.6885416667, s, 1e-9);
		}

		TEST_METHOD(TestS_Zero)
		{
			int n = 0;
			double s = 1;
			S(0, 0.01, n, s);
			Assert::AreEqual(2, n);
			Assert::AreEqual(0.0, s, 1e-9);
		}
	};
}