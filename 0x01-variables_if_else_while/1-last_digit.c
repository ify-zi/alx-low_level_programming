#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style do for function main goes there */
/**
* main - starting point
*
* Return: 0 when successful
*/

int main(void)
{
	int n;
	int lst;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lst = n % 10;
	if (lst > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lst);
	else if (lst == 0)
		printf("Last digit of %d is %d is 0\n", n, lst);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst);
	return (0);
}
