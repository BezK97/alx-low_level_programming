#include <stdio.h>
#include <errno.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char My_msg[] = "and that piece of art is useful\" - Dora Korpar,
2015-10-19\n";

	perror(My_msg);
	return (1);
}
