#include "pch.h"
#include "..\Ordine_di_grandezza\Ordine_di_grandezza.h"
namespace TEST
{ 
	TEST(TESTOrdine_di_grandezza, TESTConNumero0)
	{
		EXPECT_EQ(Ordine_di_grandezza(0), -1);
	}
	TEST(TESTOrdine_di_grandezza, TESTConNumero123)
	{
		EXPECT_EQ(Ordine_di_grandezza(123), 2);
	}
	TEST(TESTOrdine_di_grandezza, TESTConNumero123456)
	{
		EXPECT_EQ(Ordine_di_grandezza(123456), 5);
	}
}