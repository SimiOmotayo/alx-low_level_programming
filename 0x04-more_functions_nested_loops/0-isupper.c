#include "main.h"

/**
 * Prototype: int _isupper(int c);
 * Returns 1 if c is uppercase
 * Returns 0 otherwise
 */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
	if (i == c)
	{
	return (1);
	}
	}
	return (0);

}
