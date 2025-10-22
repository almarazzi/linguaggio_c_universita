#pragma once
#include <math.h>
struct d
{
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;
};
inline double discriminante(d dd) {
	return  pow(dd.b,2) - 4 * dd.a * dd.c;
}