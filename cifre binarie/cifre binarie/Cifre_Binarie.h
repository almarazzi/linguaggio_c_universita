#pragma once

inline unsigned char Cifre_Binarie(unsigned int numero, unsigned int n)
{
	return (numero >> n) & 1 ? 1:0;
}