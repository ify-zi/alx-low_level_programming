#include "main.h"

/**
* main - start point
*
* Return: 0if success
*/

int main(void)
{
	int a;

	for (a = 1; a < 101; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		else
		{
			printf("%d ", a);
		}
		if (a != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
