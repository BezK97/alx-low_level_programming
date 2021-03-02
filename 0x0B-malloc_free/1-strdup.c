#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - copy string
 *
 * @str: string to copy
 *
 * Return: NULL if fail, str_cpy if success
 */
char *_strdup(char *str)
{
	unsigned int size;
	unsigned int count = 0;
	char *str_cpy;

	for (size = 0; str[size] != '\0';)
		size++;
	str_cpy = malloc(size * sizeof(str));
	if (str == NULL || str_cpy == NULL)
		return (NULL);
	if (str_cpy != NULL)
	{
		for (; count < size; count++)
			str_cpy[count] = str[count];
	}
	str_cpy[count] = '\0';
	return (str_cpy);
}
