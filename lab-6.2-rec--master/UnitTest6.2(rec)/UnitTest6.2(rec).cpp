#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62rec
{
	TEST_CLASS(UnitTest62rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int p;
			const int k = 6;
			int a[k] = { 1,5,7,6,2,5 };
			p = K(a, 6);
			Assert::AreEqual(p, 4);
		}
	};
}
