#include <stdio.h>

/**
 * main- prints sum of multiple of 5 and 3 below 1024
 *
 * Return: 0
 */
int main(void)
{
	int num, num2 = 1;
	int result, result2 = 0;
	int tota, total2 = 0;

	while (result < 1024)
	{
		result = num * 3;
		total = total + result;
		num++;
	}
	while (result2 < 1024)
	{
		result2 = num2 * 5;
		total2 = total2 + result2;
		num2++;
	}
	printf("%d\n", total + total2);
	return (0);
}
