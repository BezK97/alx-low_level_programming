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

	if (num < 0)
	{
		num = -num % 10;
	}
	else
	{
		num %= 10;
	}
	_putchar('0' + num);
	return (num);
}
