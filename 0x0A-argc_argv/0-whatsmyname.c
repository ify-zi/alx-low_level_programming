#include <stdio.h>
#include <stdlib.h>

/**
* main - print the name of the program
* @argc: the count of the arg
* @argv: the string of the arg
* Return: returns 0 if successfull
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
