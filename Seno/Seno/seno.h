#pragma once
inline double fattoriale(int n)
{
	return (n == 1) ? 1 : n * fattoriale(n - 1);
}
inline double po(int n, double esp)
{
	double f = 1.0;
	for (int i = 0; i < n; i++)
	{
		f *= esp;
	}
	return f;
}
inline double Seno(double x)
{
	double segno = -1.0;
	double somma = 0.0;
	double e = 0.0;
	for (int i = 1; i <100; i++)
	{
		e = 2 * i + 1;
		segno *= -1.0;
		somma += (segno / fattoriale(e)) * po(e,x);

	}
	return somma/57.2957795;
}
