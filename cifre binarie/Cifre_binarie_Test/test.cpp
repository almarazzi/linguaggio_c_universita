#include "pch.h"
#include "..\cifre binarie\Cifre_Binarie.h"

namespace TEST
{
	TEST(CifeBinarieTest, Testn123)
	{
		unsigned char result = Cifre_Binarie(123, 2);
		ASSERT_EQ(result, 0);
	}
}