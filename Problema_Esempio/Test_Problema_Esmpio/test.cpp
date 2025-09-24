#include "pch.h"
#include "..\Problema_Esempio\Problema_Esempio.h"
namespace TEST
{
	TEST(TestProblema_Esempio, TestTrue) {
		int arrivo[] = { 3, 3, 9 };
		int servizio[] = { 2, 15, 14 };
		int w = attesa(arrivo, servizio, 3);
		ASSERT_EQ(w, 11);
	}
	TEST(TestProblema_Esempio, TestFalse) {
		int arrivo[] = { 3, 3, 9 };
		int servizio[] = { 2, 15, 14 };
		int w = attesa(arrivo, servizio, 3);
		ASSERT_NE(w, 12);
	}
}