#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the number of args
* @argc: args count
* @argv: the arggs strings
* Return: returns 0 if successful
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;
	int count = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			count = count + i;
		}
	}
	printf("%d\n", count);
	return (0);
}
