#include "pch.h"
extern "C"
{
#include "..\EliminaSpazi_In_Fi\EliminaSpazi_In_Fi.h"
}
namespace Test
{
	TEST(TestEli, Test) {
		char s [] = "   ciao   ";
		char* g = Elimina(s);
		ASSERT_EQ(g[0],'c');
		ASSERT_EQ(g[1],'i');
		ASSERT_EQ(g[2],'a');
		ASSERT_EQ(g[3],'o');
	}
	TEST(TestEli2, Test) {
		char s[] = "   ci ao   ";
		char* g = Elimina(s);
		ASSERT_EQ(g[0], 'c');
		ASSERT_EQ(g[1], 'i');
		ASSERT_EQ(g[2], ' ');
		ASSERT_EQ(g[3], 'a');
		ASSERT_EQ(g[4], 'o');
	}
}
