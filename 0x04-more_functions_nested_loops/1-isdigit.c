#include "holbweron.h"

/**
 * _isdigit - checks digit 0 through 9
 *
 * @c: character to be checked
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 59)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
