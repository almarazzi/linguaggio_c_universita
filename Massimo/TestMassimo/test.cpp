#include "pch.h"
#include "..\Massimo\Massimo.h"
namespace Test
{
	TEST(TestMassimo, TestMassimoTrue) {
		char y = massimo(-3,2);
		char x = massimo(6, y);
		ASSERT_EQ(x, 6);
	}
	TEST(TestMassimo, TestMassimoFalse) {
		char y = massimo(-3, 2);
		char x = massimo(6, y);
		ASSERT_NE(x, 2);
	}
}