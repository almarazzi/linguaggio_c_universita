#include "pch.h"
#include <stdlib.h>
extern "C"
{
#include "../Somma_Vettori/Somma_Vettori.h"
}


namespace Test {
	TEST(test_Somma_Vettori, Test_V) {
		size_t n = 3;
		double* a = (double*)malloc(n * sizeof(double));
		if (a != NULL)
		{
			a[0] = 1;
			a[1] = 2;
			a[2] = 3;
		}
		double* b = (double*)malloc(n * sizeof(double));
		if (b != NULL)
		{
			b[0] = -1;
			b[1] = 7;
			b[2] = 14;
		}
		double* sol = (double*)malloc(n * sizeof(double));
		if (sol != NULL)
		{
			sol[0] = 0;
			sol[1] = 9;
			sol[2] = 17;
		}
		double* res = array_somma(a, b, n);
		EXPECT_EQ(res[0], sol[0]);
		EXPECT_EQ(res[1], sol[1]);
		EXPECT_EQ(res[2], sol[2]);
		free(a);
		free(b);
		free(sol);
		free(res);
	}
}