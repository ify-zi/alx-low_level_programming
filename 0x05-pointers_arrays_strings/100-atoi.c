#include "main.h"

/**
* _atoi - convert string ti integer
* @s: the string
*
* Return:: retun the c9ncerted int
*/

int _atoi(char *s)
{
	int sin = 1, i = 0;
	unsigned int result = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sin *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	result *= sin;
	return (result);
}
