#include "holberton.h"

/**
 * print_binary -  function that prints the binary representation of a number
 *
 * @n: number to convert and print
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar('0' + (1 & n));
}
