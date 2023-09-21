#include "main.h"

/**
* *leet - encodes to 1337
* @s: collects string)
* Return: returns the char
*/

char *leet(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == 'a' || s[i] == 'A')
			s[i] = '3';
		else if (s[i] == 'e' || s[i] == 'E')
			s[i] = '5';
		else if (s[i] == 'o' || s[i] == 'O')
			s[i] = '0';
		else if (s[i] == 't' || s[i] == 'T')
			s[i] = '7';
		else if (s[i] == 'l' || s[i] == 'L')
			s[i] = '1';
	i++;
	}
	return (s);
}
