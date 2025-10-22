#include "pch.h"
#include "..\Esponenziali\esponenziale.h"
TEST(Test_fattoriale, test) {

	ASSERT_EQ(esponenziale(5), 148.413);
}