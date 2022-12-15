#include "main.h"
#include "6-abs.c"

/**
 * function that prints the last digit of a number
 * Prototype: int print_last_digit(int);
 * Returns the value of the last digit
 */

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
