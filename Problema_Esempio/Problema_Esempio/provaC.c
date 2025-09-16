

#include <stdio.h>
int attesa(int *arrivo, int *servizio, int numPe);
int main()
{
	int arrivo[] = {3, 3, 9};
	int servizio[] = { 2, 15, 14 };
	int w =attesa(arrivo,servizio,3);
	printf("%d", w);
}
int attesa(int *arrivo, int *servizio, int numPe)
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
			if(att>maxW)
				maxW = att;
			tempocorrente += servizio[i];
		}
		
	}
	return maxW;

}

