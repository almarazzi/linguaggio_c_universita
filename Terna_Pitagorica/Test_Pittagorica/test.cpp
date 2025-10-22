#include "pch.h"
#include "..\Terna_Pitagorica\Terna_Pittagorica.h"
TEST(TestPitagorica, 543) {

  EXPECT_EQ(1, Terna_Pitagorica(5,4,3));
 
}
TEST(TestPitagorica, 345) {

	EXPECT_EQ(1, Terna_Pitagorica(3, 4, 5));

}
TEST(TestPitagorica, 123) {

	EXPECT_EQ(0, Terna_Pitagorica(1, 2, 0));

}