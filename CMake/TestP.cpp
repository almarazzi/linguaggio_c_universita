#include <gtest/gtest.h>

extern "C"
{
#include "max.h"
}

TEST(MaxTest, m)
{ 
	EXPECT_EQ(Max(4, 5),5);
}