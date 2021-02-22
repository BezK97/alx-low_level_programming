#include "holberton.h"

/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: string to search bytes of
 * @accept: bytes to check
 *
 * Return: count, offset from beginning of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 1;
	int len = 0;
	int len2 = 0;

	while (*(accept + len) != '\0')
	{
		while (*(s + len2) != '\0')
		{
			if (*(accept + len) == *(s + len2))
				break;
			count++;
			len2++;
		}
		if (*(accept + len) == *(s + len2))
			break;
		count = 1;
		len2 = 0;
		len++;
	}
	if (*(accept + len) == *(s + len2))
		return (count);
	else
		return (0);
}
