#pragma once
inline unsigned int Somma_Cifre(unsigned int n)
{
	unsigned int s = 0;
	while (n != 0 )
	{
		s += n % 10;
		n /= 10;
	}
	return s; 
}
