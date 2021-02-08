#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet - function to print alphabet in lower case
 * followed by a new line
 *
 * Return: Void
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
