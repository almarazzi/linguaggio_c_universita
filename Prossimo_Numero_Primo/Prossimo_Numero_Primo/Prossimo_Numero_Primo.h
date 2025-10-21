#pragma once
inline unsigned int Prossimo_Numero_Primo(int n) 
{
	n++;
	for (int i = n-1; i > 1; i--)
	{
		if (n % i == 0)
		{
			return Prossimo_Numero_Primo(n); //se non e primo
		}
	}
	return n; //se e primo 
}