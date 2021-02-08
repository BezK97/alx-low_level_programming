#include <stdio.h>
#include "holberton.h"

/**
 * print_last_digit - compute and print last digit
 *
 * @num: number to be computed
 *
 * Return: last digit of num
 */
int print_last_digit(int num)
{
	char last;

	if (num < 0)
	{
		num = -num;
	}

	num %= 10;
	last = '0' + num;
	_putchar(last);
	return (num);
}
