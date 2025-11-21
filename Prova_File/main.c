#include<stdio.h>
#include <stdlib.h>
int main()
{
	FILE* f = fopen("prova.txt", "r");
	if (f == NULL)
	{
		perror("Erorre: Impossibile Aprire il file");
			return EXIT_FAILURE;
	}
	fseek(f, 0, SEEK_END);
	size_t size = ftell(f);
	fseek(f, 0, SEEK_SET);
	char* s = malloc((sizeof(char) * size) + 1);
	if (s == NULL)
	{
		perror("Erorre: Malloc non Creata");
			return EXIT_FAILURE;
	}
	fread(s, 1, size, f);
	s[size] = '\0';
	fclose(f);
	printf("nel file c'era scritto: ");
	for (size_t i = 0; i < size * sizeof(char); i++)
	{
		printf("%c", s[i]);
	}
	free(s);
	return 0;
}