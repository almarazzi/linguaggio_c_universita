#pragma once
#include <stdbool.h>

static bool Cresente(unsigned int x)
{
	unsigned int penUltimo=0, Ultimo=0;
	while (x!=0)
	{
		Ultimo = x % 10;
		x /= 10;
		penUltimo = x % 10;
		if (Ultimo >= penUltimo)
		{
			continue;
		}
		else
		{
			return false;
		}
	}
	return true;

}