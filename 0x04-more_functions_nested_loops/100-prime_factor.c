#include <stdio.h>
#include <inttypes.h>

/**
* largestPrimeFactor - find the largest factor
* @n: accepts arg
*
*Return: maxprime
*/

int64_t largestPrimeFactor(int64_t n)
{
	int64_t i;
	int64_t maxPrime = -1;
	
	while (n % 2 == 0)
	{
		maxPrime = 2;
		n /= 2;
	}

	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n /= i;
		}
	}
	if (n > 2)
	{
		maxPrime = n;
	}
	return maxPrime;
}
/**
* main - void of argusment
*
*Return: 0;
*/
int main(void)
{
	int64_t number = 612852475143;
	int64_t result = largestPrimeFactor(number);
	printf("%" PRId64 "\n", result);
	return 0;
}
