#include "pch.h"
#include "CppUnitTest.h"
extern "C" {
#include "../Problema_Esempio/provaC.c"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(attesaMax)
		{
			int arrivo[] = { 3, 3, 9 };
			int servizio[] = { 2, 15, 14 };
			int w = attesa(arrivo, servizio, 3);
			Assert::AreEqual(11, w);	// con 12 da test non superato
		}
	};
}
