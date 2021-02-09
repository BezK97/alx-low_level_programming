#include <stdio.h>
#include "holberton.h"

/**
 * sum_of_multiple - prints sum of multiple of 5 and 3 below 1024
 *
 * void: no argument
 */
void sum_of_multiple(void)
{
	int num1, num2;
	int result1, result2;
	int addition1, addition2 = 0;
	int total;

	for (num1 = 1; result1 < 1024; num1++)
	{
		result1 = num1 * 3;
		addition1 += result1;
	}
	for (num2 = 1; result2 < 1024; num2++)
	{
		result2 = num2 * 5;
		addition2 += result2;
	}

	total = result1 + result2;
	printf("%d\n", total);
}
