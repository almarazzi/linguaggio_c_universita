#include "pch.h"
#include "..\Somma_Cifre\Somma_Cifra.h"
namespace Test_Somma_Cifre 
{
	TEST(Test_Somma_Cifre, Test123)
	{
		EXPECT_EQ(6, Somma_Cifre(123));
	}
}