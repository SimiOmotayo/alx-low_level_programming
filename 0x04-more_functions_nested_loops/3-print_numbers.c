#include "main.h"
#include <stdio.h>
/**
 * print numbers from 0 to 9
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	putchar(10);

}
