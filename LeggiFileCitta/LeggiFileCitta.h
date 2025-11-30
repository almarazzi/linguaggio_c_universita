#pragma once
#include <malloc.h>
#include <string.h>
#include <stdio.h>

struct citta {
	char* nome;
	unsigned int popolazione;
};

struct citta* Leggi_Citta(const char* NomeFile, size_t *n);
