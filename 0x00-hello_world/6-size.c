#include <stdio.h>

/**
 * main - Entry point
 *
 * sizeof: return memory allocated to a data type
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	float f;

	printf("Size of a char: %u byte(s)\n", (unsigned)sizeof(c));
	printf("Size of an int: %u byte(s)\n", (unsigned)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long long int: %llu byte(s)\n",
(unsigned long long)sizeof(i));
	printf("Size of a float: %u byte(s)\n", (unsigned)sizeof(f));
	return (0);
}
