#pragma once
#include <string.h>
#include <stdio.h>
#include <malloc.h>

struct citta {
	char* nome;
	unsigned int popolazione;
};

struct citta* Leggi_cittadini(const char* NomeFile, size_t* n)
{
	if (n == NULL)
	{
		return NULL;
	}
	FILE* f = fopen(NomeFile, "r");
	if (!f)
	{
		*n = 0;
		return NULL;
	}
	if (fscanf_s(f, "%zu", &*n) != 1 || &n <= 0)
	{
		*n = 0;
		return NULL;
	}
	struct citta* Citta = calloc(sizeof(struct citta), (*n));
	if (Citta == NULL)
	{
		*n = 0;
		fclose(f);
		free(Citta);
		return NULL;
	}
	fgetc(f);
	for (size_t i = 0; i < *n; i++)
	{
		char Riga[255];
		if (!fgets(Riga, sizeof(Riga), f))
		{
			for (size_t j = 0; j < i; j++)
			{
				free(Citta[j].nome);
			}
			*n = 0;
			fclose(f);
			free(Citta);
			return NULL;
		}
		Riga[strcspn(Riga, "\n")] = '\0';
		Citta[i].nome = malloc(strlen(Riga) + 1);
		if (Citta[i].nome == NULL)
		{
			for (size_t j = 0; j < i; j++)
			{
				free(Citta[j].nome);
			}
			*n = 0;
			fclose(f);
			free(Citta);
			return NULL;
		}
		int Erorre = sscanf_s(Riga, "%255[^,], %u", Citta[i].nome, ((unsigned)strlen(Riga) + 1), &Citta[i].popolazione);
		if (Erorre != 2)
		{

			for (size_t j = 0; j < i; j++)
			{
				free(Citta[j].nome);
			}
			*n = 0;
			fclose(f);
			free(Citta);
			return NULL;
		}
	}
	fclose(f);
	return Citta;

}
