#include <stdio.h>
#include <stdlib.h>

/**
* main - print the args of a string
* @argc: count of the args
* @argv: the array of the args
* Return: retrun 0 if successfull
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
