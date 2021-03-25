#include "holberton.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *
 * @b: binary to convert
 *
 * Return:  the converted number, or 0 if not
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len = 0, count, num, result = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		len++;
	for (i = 0; len > 0; len--, i++)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);
		if (b[i] == '1')
		{
			for (num = 1, count = len - 1; count != 0; count--)
				num *= 2;
			result += num;
		}
	}
	return (result);
}
