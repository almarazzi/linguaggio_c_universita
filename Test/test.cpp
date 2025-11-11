#include "pch.h"
extern "C"
{
#include "..\Lungezza_Stringa\Lungezza_Stringa.h"
}
namespace TEST
{
	TEST(TestStringa, 1Test) {
		char s[] = "Ecco la stringa di prova";
		size_t leg;
		leg = lungh(s);
		EXPECT_EQ(leg, 24);
	}
}