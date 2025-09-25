#include "pch.h"
#include "..\Multipli\Multipli.h"
namespace Test
{
	TEST(TestMultipli, TestMultipliTrue) {
		bool x = multipli(6, -3);
		ASSERT_TRUE(x);
	}
	TEST(TestMultipli, TestMultipliFalse) {
		bool x = multipli(15, 6);
		ASSERT_FALSE(x);
	}
}