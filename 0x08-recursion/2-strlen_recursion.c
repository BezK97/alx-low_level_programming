#include "holberton.h"

/**
 * _strlen_recursion - print length of string
 *
 * @s: string to count
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*(s + 1) == '\0')
		return (1);
	s++;
	_strlen_recursion(s);
	return (_strlen_recursion(s) + 1);
}
