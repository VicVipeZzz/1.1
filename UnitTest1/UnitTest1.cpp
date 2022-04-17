#include "pch.h"
#include "CppUnitTest.h"
#include "../1.1/IntPower.h"
#include "../1.1/IntPower.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			IntPower a;
			a.Init(4.0, 6.0);
			double result = a.Power();
			Assert::AreEqual(result, 4096.0);
		}
	};
}
