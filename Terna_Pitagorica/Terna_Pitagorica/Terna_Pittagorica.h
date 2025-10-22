#pragma once
#include "stdbool.h"

inline bool Terna_Pitagorica(unsigned int a, unsigned int b, unsigned int c)
{
	if(a>b && a>c)
	{ 
		if (((b * b) + (c * c)) == (a*a))
		{
			return true;
		}
	}
	if (b > a && b > c)
	{
		if (((a * a) + (c * c)) == (b*b))
		{
			return true;
		}
	}
	if (c > b && c > a)
	{
		if (((b * b) + (a * a)) == (c*c))
		{
			return true;
		}
	}
	return false;
}
