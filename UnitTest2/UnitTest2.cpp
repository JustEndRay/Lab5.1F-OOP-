#include "pch.h"
#include "CppUnitTest.h"
#include "../Car.h"
#include "../Car.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Car a("", 4, 4);
			int f = a.GetPower();
			Assert::AreEqual(f, 4);
		}
	};
}
