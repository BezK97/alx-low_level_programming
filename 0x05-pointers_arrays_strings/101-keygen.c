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
	password = rand() % 122;
	while (len < 8)
	{
		if ((password >= 65 && password <= 90) || password >= 97)
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
