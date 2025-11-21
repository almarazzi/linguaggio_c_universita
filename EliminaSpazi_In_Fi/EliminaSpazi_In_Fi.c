#include "EliminaSpazi_In_Fi.h"
#include <malloc.h>
char * Elimina(const char* stringa)
{
	size_t inzio = 0;
	size_t fine = 0;
	while (stringa[fine] != '\0')
	{
		fine++;
	}
	fine--;
	while (stringa[inzio] == ' ' && stringa[inzio] != '\0')
	{
		inzio++;
	}
	while (fine>=inzio && stringa[fine] == ' ')
	{
		fine--;
	}
	size_t g = (fine - inzio)+2;
	char* f = calloc(g, sizeof(char));
	if (f == NULL)
	{
		return;
	}
	for (size_t i =0;i <= (fine-inzio); i++)
	{
		f[i] = stringa[inzio+i];
	}
	f[(fine-inzio)+1] = '\0';
	return f;

}