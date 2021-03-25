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
	if (index > 32 || n == '\0')
		return (-1);
	return ((n & (1 << index)) >> index);
}
