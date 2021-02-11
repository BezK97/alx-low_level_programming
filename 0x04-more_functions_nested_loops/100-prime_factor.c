#include <stdio.h>

/**
 * main - prints largest prime factor of 612852475143
 *
 * Return: 0
 */
int main(void)
{
	long int num = 612852475143;
	long int factor = 1;
	long int prime;

	while (factor < num)
	{
		if (factor % num == 0)
		{
			prime = factor / num;
		}
		factor++;
	}
	printf("ld\n", prime);
}
