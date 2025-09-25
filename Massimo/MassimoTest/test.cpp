#include "pch.h"
#include "..\Massimo\Massimo.h"
namespace Test
{
	TEST(TestMassimo, TestMassimoTrue) {
		char y = massimo(-3, 2);
		char z = massimo(6, y);
		ASSERT_EQ(z, 6);
	}
	TEST(TestMassimo, TestMassimofalse) {
		char y = massimo(-3, 2);
		char z = massimo(6, y);
		ASSERT_NE(z, 2);
	}
}