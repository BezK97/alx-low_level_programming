#include "holberton.h"

/**
 * string_toupper - change lowercase to uppercase
 *
 * @str: string to change
 *
 * Return: str
 */
char *string_toupper(char *str)
{
	int len = 0;

	while (*(s + len) != 0)
	{
		if (*(s + len) >= 'a' && *(s + len) <= 'z')
		{
			*(s + len) = *(s + len) - 32;
		}
		len++;
	}
	return (s);
}
