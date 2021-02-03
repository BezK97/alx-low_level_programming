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

	printf("Size of a char: %u byte(s)\n", sizeof(c));
	printf("Size of an int: %u byte(s)\n", sizeof(i));
	printf("Size of a long int: %u byte(s)\n", sizeof(long i));
	printf("Size of a long long int: %u byte(s)\n", sizeof(long long i));
	printf("Size of a float: %u byte(s)\n", sizeof(f));
	return (0);
}
