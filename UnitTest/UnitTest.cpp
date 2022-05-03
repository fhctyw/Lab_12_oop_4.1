#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab_12_oop_4.1\Progression.h"
#include "..\Lab_12_oop_4.1\ArithmeticProgression.cpp"
#include "..\Lab_12_oop_4.1\GeometricProgression.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Progression* p = new ArithmeticProgression(0, 2);
			Assert::AreEqual((int)p->calcElement(3), 6);
		}
	};
}
