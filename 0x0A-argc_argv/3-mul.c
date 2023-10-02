#include <stdio.h>
#include <stdlib.h>

/**
* main - print the multiple of the number
* @argc: the count
* @argv: the array of string
* Return: returns 0 if successful
*/

int main(int argc, char *argv[])
{
	int mul = 1;
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < 3; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
		return (0);
	}
}
