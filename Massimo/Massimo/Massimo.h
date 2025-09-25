#pragma once
int massimo(char a, char b);

int massimo(char a, char b)
{
	char x = a > b ? a : b;
	return x;
}
