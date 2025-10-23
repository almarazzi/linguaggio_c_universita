#include "pch.h"
#include "..\Numeri_Felici\Numeri_Felici.h"
TEST(Test_Numeri_Felici, test_True) {
	ASSERT_EQ(Felici(7), true);
}
TEST(Test_Numeri_Felici, Test_false) {
	ASSERT_EQ(Felici(8), false);
}