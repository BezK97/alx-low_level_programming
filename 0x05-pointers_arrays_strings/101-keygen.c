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
	int len = 0, password;

	srand(time(NULL));
	while (len < 128)
	{
		password = rand() % 122;
		if ((password >= 65 && password <= 90) || password >= 97
		    || (password >= 33 && password <= 47)
		    || (password >= 58 && password <= 64)
		    || (password >= 91 && password <= 96))
		{
			printf("%c", (char)password);
		}
		else
		{
			printf("%d", password % 10);
		}
		len++;
	}
	printf("\n");
	return (0);
}
