#include "main.h"

/**
 * function that prints every minute of the day of 
 * Jack Bauer, starting from 00:00 to 23:59.
 * Prototype: void jack_bauer(void);
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10+ '0');															_putchar('\n');
		}

	}

}
