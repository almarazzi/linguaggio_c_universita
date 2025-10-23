#include "pch.h"
#include "..\Numeri_Cresenti\Numeri_Cresenti.h"
namespace Test_Numeri_Cresenti
{
	TEST(Test_Numeri_Cresenti, testTrue1) {
		EXPECT_EQ(Cresente(123), true);
	}
	TEST(Test_Numeri_Cresenti, testTrue2) {
		EXPECT_EQ(Cresente(5), true);
	}
	TEST(Test_Numeri_Cresenti, testFalse) {
		EXPECT_EQ(Cresente(124), true);
	}
}