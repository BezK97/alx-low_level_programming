#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2 = '0';

	while (num1 <= '9')
	{
		while (num2 <= '9')
		{
			putchar(num1);
			putchar(num2);

			if ((num2 != '9') || (num1 != '9'))
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num2 = '0';
		num1++;
	}
	putchar('\n');
	return (0);
}
