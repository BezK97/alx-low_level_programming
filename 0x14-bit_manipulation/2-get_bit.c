#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 *
 * @n: number to index
 * @index: index to bit to return
 *
 * Return: res, index to bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int res, len = 0, *num, j;
	unsigned long int x = n;

	for (j = 0; x > 0; j++, len++)
		x = x / 2;
	if (index >= len)
		return (-1);
	num = malloc(len * 4 * sizeof(int));
	if (num == NULL)
		return (-1);
	for (j = 0; n > 0; j++)
	{
		num[j] = n % 2;
		n = n / 2;
	}
	res = num[index];
	return (res);
}
