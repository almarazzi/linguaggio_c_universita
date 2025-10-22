#include "pch.h"
#include "..\Discriminante\Discriminante.h"
namespace TestDiscriminante
{
	TEST(TestD, test)
	{
		ASSERT_EQ(discriminante({1,2,1}), 0);
	}
}