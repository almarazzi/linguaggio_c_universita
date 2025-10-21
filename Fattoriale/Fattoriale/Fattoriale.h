#pragma once
inline unsigned int Fattoriale(unsigned char N)
{
	return (N == 0 || N == 1) ? 1 : N * Fattoriale(N - 1);
}
