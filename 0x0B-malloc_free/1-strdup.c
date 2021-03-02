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
	int size;
	int count = 0;
	char *str_cpy;

	for (size = 0; str[size] != '\0';)
		size++;
	str_cpy = malloc (size * sizeof(str));
	if (str == NULL)
		return (NULL);
	for (; count <= size; count++)
		str_cpy[count] = str[count];
	return (str_cpy);
}
