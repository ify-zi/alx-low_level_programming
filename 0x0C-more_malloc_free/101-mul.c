#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */

int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j;
	char msg[] = "Error";

	if (argc != 3)
	{
		for (i = 0; i < 5; i++)
			_putchar(msg[i]);
		_putchar('\n');
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				for (i = 0; i < 5; i++)
					_putchar(msg[i]);
				_putchar('\n');
				exit(98);
			}
		}
	}
	mul = atoi(argv[1]) *  atoi(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
