#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* *argstostr - takes the ars and return a str
* @av: first operand
* @ac: second operand
* Return: return char if success
*/

char *argstostr(int ac, char **av)
{
	char *lst;
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	lst = (char *)malloc(sizeof(char) * ac);

	if (lst == NULL)
	{
		free(lst);
		return (NULL);
	}
	lst[0] = '\0';

	for (i = 1; av[i] != NULL; i++)
	{
		strcat(lst, av[i]);
		strcat(lst, "\n");
	}
	return (lst);
}
