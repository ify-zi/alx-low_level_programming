#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
* print_chessboard - prints the chess board
* @a: the chess array
*/

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	if (a != NULL)
	{
		for (i = 0; i < 8; i++)
		{
			for (j = 0; j < 8; j++)
			{
				_putchar(*(*(i + a) + j));
			}
			_putchar('\n');
		}
	}
}
