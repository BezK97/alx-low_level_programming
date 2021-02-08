#include <stdio.h>
#include "_putchar.c"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count, msg;

	for (count = 1; count <= 10; count++)
	{
		if (count == 1)
			msg = _putchar('H');
		else if (count == 2 || count == 8)
			msg = _putchar('o');
		else if (count == 3)
			msg = _putchar('l');
		else if (count == 4)
			msg = _putchar('b');
		else if (count == 5)
			msg = _putchar('e');
		else if (count == 6)
			msg = _putchar('r');
		else if (count == 7)
			msg = _putchar('t');
		else if (count == 9)
			msg = _putchar('n');
		else
			msg = _putchar('\n');
	}
	putchar(msg);
	return (0);
}
