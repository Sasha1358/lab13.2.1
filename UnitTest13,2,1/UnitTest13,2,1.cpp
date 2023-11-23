#include "pch.h"
#include "CppUnitTest.h"
#include <cassert>
#include "../lab13.2.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1321
{
	TEST_CLASS(UnitTest1321)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int result = MAX(5, 3);
			Assert::AreEqual(5, result);
		}
	};
}
