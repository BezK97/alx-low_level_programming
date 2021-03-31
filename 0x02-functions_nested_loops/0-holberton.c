#include "holberton.h"

/**
 * main - Entry point
 *
 * _putchar: Calls function _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char str = "Holberton\n";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (0);
}
