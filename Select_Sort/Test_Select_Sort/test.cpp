#include "pch.h"
#include "..\\Select_Sort\Slect_Sort.h"
namespace TEST
{

	TEST(TEST_Select_Sort, Select_Sort) {
		int* a =new int[5]{5,4,6,8,1};
		int* fine = a;
		fine = fine + 5;
		Select_Sort(a,fine);
		int* e =new int[5]{1,4,5,6,8};
		for (int i = 0; i < 5; i++)
		{
			ASSERT_EQ(a[i], e[i]);
		}
		
	}
}