#include "pch.h"
#include "..\Seno\seno.h"
TEST(TestSeno, Test30) {
  EXPECT_EQ(0.54, Seno(30));
}