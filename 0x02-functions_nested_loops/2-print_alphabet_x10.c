#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 * followed by a new line
 *
 * Return: Void
 */

void print_alphabet_x10(void)
{
	int count = 1;
	char alpha;

	while (count <= 0)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		count++;
	}
}
