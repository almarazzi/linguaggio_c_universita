#pragma once
static unsigned int inverti(unsigned int i)
{ 
	unsigned int Inverso = 0;
	while (i !=0)
	{
		Inverso = Inverso * 10 + (i % 10);
		i /= 10;
	}
	return Inverso;

}