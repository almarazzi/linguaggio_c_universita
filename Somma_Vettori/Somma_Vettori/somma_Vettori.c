#include <stdlib.h>
#include "Somma_Vettori.h"
double* array_somma(const double* arr1, const double* arr2, size_t n)
{
	double* solV = malloc(n * sizeof(double));
	if (solV == NULL)
	{
		return 0;
	}
	for (size_t i = 0; i < n; i++)
	{
		*(solV + i) = *(arr1 + i) + *(arr2 + i);
	}
	return solV;
}