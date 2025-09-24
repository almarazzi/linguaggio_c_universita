#pragma once


inline int attesa(int* arrivo, int* servizio, int numPe)
{
	int tempocorrente = 0;
	int maxW = 0;
	for (int i = 0; i < numPe; i++)
	{
		if (arrivo[i] >= tempocorrente)
		{
			tempocorrente = arrivo[i] + servizio[i];
		}
		else
		{
			int att = tempocorrente - arrivo[i];
			if (att > maxW)
				maxW = att;
			tempocorrente += servizio[i];
		}

	}
	return maxW;

}
