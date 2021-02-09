#include <stdio.h>

/**
 * main- prints sum of multiple of 5 and 3 below 1024
 *
 * Return: 0
 */
int main(void)
{
	int total = 0;
	int num;

	for (num = 1; num < 1024; num++)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			total += num;
		}
	}
	printf("%d\n", total);
	return (0);
}
