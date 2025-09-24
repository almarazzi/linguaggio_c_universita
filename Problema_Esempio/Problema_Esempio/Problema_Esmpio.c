#include <stdio.h>
#include <stdlib.h>
#include "Problema_Esempio.h"
int main()
{
	int arrivo[] = { 3, 3, 9 };
	int servizio[] = { 2, 15, 14 };
	int w = attesa(arrivo, servizio, 3);
	printf("%d\n", w);
	system("pause");
	return 0;


}