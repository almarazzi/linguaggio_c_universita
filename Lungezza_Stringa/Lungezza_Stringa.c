#include "stdlib.h"
#include "Lungezza_Stringa.h"

size_t lungh(const char* str)
{
	size_t i = 0;
	size_t lug=0;
	while (str[i] != '\0')
	{

		lug++;
		i++;
	}
	return lug;
}