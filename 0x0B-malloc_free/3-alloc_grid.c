#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/** **alloc_grid - allocates all the matrix
* @width: width of the array
* @height: the height of the array
* Return: return the string on the array
*/

int **alloc_grid(int width, int height)
{
	int **img;
	int i, j;

	if (width <= 0)
		return (NULL);

	if (height <= 0)
		return (NULL);

	img = malloc(sizeof(int *) * height); 
	if (img == NULL)
	{
		free(img);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		img[i] = malloc(sizeof(int) * width);

		if (img[i] == NULL)
		{
			for (i--; i <= 0; i--)
				free(img[i]);
			free(img);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			img[i][j] = 0;
		}
	}
	return (img);
}
