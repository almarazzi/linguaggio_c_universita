#include "pch.h"
#include "..\Fattoriale\Fattoriale.h"
namespace Test
{

	TEST(Test, TestFattoriale) {
		ASSERT_EQ(120, Fattoriale(5));
	}
}