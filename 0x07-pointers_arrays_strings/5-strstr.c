#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - locate a substring
 *
 * @haystack: string to check
 * @needle: substring
 *
 * Return: substring or NULL if not located
 */
char *_strstr(char *haystack, char *needle)
{
	int len, len2;

	for (len = 0; *(needle + len) != '\0'; len++)
	{
		len2 = 0;
		while (*(haystack + len2) != '\0')
		{
			if (*(needle + len) == *(haystack + len2))
				return ((haystack + len2));
			len2++;
		}
	}
	return (NULL);
}
