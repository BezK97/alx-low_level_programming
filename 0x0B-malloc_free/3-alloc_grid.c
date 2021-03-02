#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - creates two dimensional array
 *
 * @width: width
 * @height: height
 *
 * Return: array_2D
 */
int **alloc_grid(int width, int height)
{
	int count, count2;
	int **array_2D;

	if (width <= 0 || height <= 0)
		return (NULL);

	array_2D = malloc(height * sizeof(int));
	if (array_2D == NULL)
		return (NULL);

	for (count = 0; count < height; count++)
		array_2D = malloc(width * sizeof(int));
	for (count = 0; count < height; count++)
	{
		for (count2 = 0; count2 < width; count2++)
			array_2D[count][count2] = 0;
	}
	return (array_2D);
}
