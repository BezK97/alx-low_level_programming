#include <stdio.h>
#include <stdlib.h>

/**
 * main - Random number generator
 *
 * Return: number
 */
int main(void)
{
	int num;

	while (num < 10000000)
	{
		num = (rand() % 99999999 + 1);
		num++;
	}
	return (num);
}
