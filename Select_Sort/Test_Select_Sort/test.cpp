#include "pch.h"
#include "..\\Select_Sort\Slect_Sort.h"
namespace TEST
{

	TEST(TEST_Select_Sort, Select_Sort) {
		int a[] = {5,4,6,8,1};
		Select_Sort(a,sizeof(a)/sizeof(a[0]));
		int e[] = {1,4,5,6,8};
		for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
		{
			ASSERT_EQ(a[i], e[i]);
		}
		
	}
}