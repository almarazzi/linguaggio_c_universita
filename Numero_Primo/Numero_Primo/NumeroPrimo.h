#pragma once

inline int Numero_Primo(unsigned int n)
{
	for (int i = n-1; i > 1; i--)
	{
		if(n%i == 0)
		{ 
			return 0; // se non e primo
		}
	}
	return 1; // se e primo 
}
