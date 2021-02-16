#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Random number generator
 *
 * Return: number
 */
int main(void)
{
	int num;

	srand(time(NULL));
	while (num < 10000000)
	{
		num = (rand() % 99999999 + 1);
		num++;
	}
	return (num);
}
