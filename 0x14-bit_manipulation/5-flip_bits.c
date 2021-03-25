#include "holberton.h"

/**
 * flip_bits - Returns number of bits to flip to chage number from n to m
 *
 * @n: number to flip from
 * @m: number to flip to
 *
 * Return: 1 if it worked or -1 if it didn't
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	unsigned int count = 0;

	for (num = n ^ m; num > 0; count++)
		num &= (num - 1);
	return (count);
}
