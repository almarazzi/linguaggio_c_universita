#include<stdio.h>

int main() {

	char s[100];
	scanf_s("%99s", s,(unsigned int)sizeof(s));
	printf("%s", s);
	int i=0;
	scanf_s("%d", &i);
	printf("%d", i);
	return 0;

}