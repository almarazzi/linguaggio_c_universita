#pragma once
static unsigned short bin2bcd(unsigned short val)
{
	unsigned short i = 0, u = 0, s = 0,y=0;
	while (val != 0)
	{
		i = val % 10;
		s |= (i << (u * 4));
		val /= 10;
		u++;
	}
	/*for (int i = 0; i < u * 4; i++)
	{
		y += (s >> i) & 1;
	}*/
	return s;
}
