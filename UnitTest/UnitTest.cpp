#include "pch.h"
#include "CppUnitTest.h"

#include "SingleObject.h"
#include "FactoryMethod.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestSingleton)
		{
			SingleObject& obj = SingleObject::getInstance();
			obj.print();
		}

		TEST_METHOD(TestFactoryMethod)
		{
			int a = 2;
			int b = 3;
			int expectedRes = a + b;	
			CalculatorFactory* fact = new AddFactory();
			Calculater* oprt = fact->createCalculater();
			int addRes = oprt->calculate(a, b);
			Assert::AreEqual(expectedRes, addRes);

			fact = new MulFactory();
			oprt = fact->createCalculater();
			expectedRes = a * b;
			int mulRes = oprt->calculate(a, b);
			Assert::AreEqual(expectedRes, mulRes);
		}

	};
}
