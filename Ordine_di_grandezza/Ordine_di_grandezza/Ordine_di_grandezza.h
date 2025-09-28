#pragma once
inline char Ordine_di_grandezza(unsigned int Numero)
{
	if (Numero != 0)
	{
		unsigned int Ordine = 0;
		while (Numero >= 10)
		{
			Numero = Numero / 10;
			Ordine++;
		}
		return Ordine;
	}
	return -1;
}
