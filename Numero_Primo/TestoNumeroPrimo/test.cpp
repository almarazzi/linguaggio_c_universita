#include "pch.h"
#include "..\Numero_Primo\NumeroPrimo.h"
namespace Test {

	TEST(TestTrue, TestNumero_primo2) {
		ASSERT_EQ(1, Numero_Primo(2));
	}
	TEST(TestTrue, TestNumero_primo11) {
		ASSERT_EQ(1, Numero_Primo(11));
	}
	TEST(TestFalse, TestNumero_primo10) {
		ASSERT_EQ(0, Numero_Primo(10));
	}
}