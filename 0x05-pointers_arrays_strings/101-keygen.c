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
	int num = 0;
	char pssword[9];

	srand((unsigned int)(time(NULL)));
	while (num < 9)
	{
		password[num] = (rand() % 9);
		num++;
	}
	return (password);
}
