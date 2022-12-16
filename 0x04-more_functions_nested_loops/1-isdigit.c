#include "main.h"
#include <stdio.h>

/**
 * Prototype: int _isdigit(int c);
 * Returns 1 if c is a digit
 * Returns 0 otherwise
 */

int _isdigit(int c)
{
	int a;

	for (a = '0'; a <= '9'; a++)

	{
	if (a == c)
	{
	return (1);
	}
	}
	return (0);

}
