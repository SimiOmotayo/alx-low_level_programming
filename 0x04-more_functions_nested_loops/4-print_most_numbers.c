#include "main.h"

/**
 * function that prints the numbers, from 0 to 9, followed by a new line.
 * Return: failure if 2,4
 */

void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a != '2' && a != '4')
	{
		_putchar(a);
	}
	}
	_putchar('\n');

}
