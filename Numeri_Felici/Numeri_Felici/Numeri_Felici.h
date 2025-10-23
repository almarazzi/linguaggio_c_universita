#pragma once
#include <stdbool.h>
static bool Felici(unsigned int n)
{ 
	unsigned int pot = n;
	unsigned int s = 0;
	while (pot !=0)
	{
		int y = pot % 10;
		pot = pot / 10;
		s += y*y;
	}
	if (s == 1)
	{
		return true;
	}
	else if (s == 4)
	{
		return false;
	}
	else if (s != 1 && s != 4)
	{
		Felici(s);
	}

}
