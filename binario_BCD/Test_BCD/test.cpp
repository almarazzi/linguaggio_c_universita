#include "pch.h"
#include "..\binario_BCD\binario_BCD.h"
TEST(Test_BCD, test) {
	EXPECT_EQ(bin2bcd(127), 0b0000000100100111); //0000.0001.0010.0111
	EXPECT_EQ(bin2bcd(127), 0x0127);
}