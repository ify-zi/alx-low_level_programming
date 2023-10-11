#include "calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main block
 * @argc: args count
 * @argv: args vetor
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int (*opt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opt = get_op_func(argv[2]);

	if (!opt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", opt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
