#include "pch.h"
#include "..\Quadrato_della_distanza\Quadrato_della_distanza.h"
namespace Test {

	TEST(Quadrato_della_distanzaTest, Quadrato_della_distanzaTestTrue) {
		ASSERT_EQ(Qaudrato_Della_distanza({2,3}, {4,5}), 8);
	}
	TEST(Quadrato_della_distanzaTest, Quadrato_della_distanzaTestTrue2) {
		ASSERT_EQ(Qaudrato_Della_distanza({1,4}, {2,6}), 5);
	}
}