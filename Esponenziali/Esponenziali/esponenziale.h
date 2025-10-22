#pragma once
inline double fattoriale(double f)
{
	return (f == 1)? 1:f * fattoriale(f - 1);
}
inline double esponenziale(double x)
{
	double p = 1.0;
	double s = 1.0;
	for (int i = 1; i < 109; i++)
	{
		p *= x;
		s += p / fattoriale(i);

	}
	return s;	
}
