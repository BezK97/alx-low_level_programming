#include <stdio.h>
#include "holberton.h"

/**
 * jack_bauer - print out every minute of the day
 *
 * Return: Void
 */
void jack_bauer(void)
{
	char hr, min, sec1, sec2;

	for (hr = '0'; hr <= '2'; hr++)
	{
		for (min = '0'; min <= '9'; min++)
		{
			for (sec1 = '0'; sec1 <= '5'; sec1++)
			{
				for (sec2 = '0'; sec2 <= '9'; sec2++)
				{
					_putchar(hr);
					_putchar(min);
					_putchar(':');
					_putchar(sec1);
					_putchar(sec2);
					_putchar('\n');
				}
				sec2 = '0';
			}
			sec1 = '0';
			if (hr == '2' && min == '3')
			{
				break;
			}
		}
		min = '0';
	}
	hr = '0';
}
