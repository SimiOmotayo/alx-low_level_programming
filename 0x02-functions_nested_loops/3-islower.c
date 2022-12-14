#include "main.h"

/**
 * Functions that checks for lowercase character
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
 */

int _islower(int c)
{
	int i;
	for (i = 'a'; i <= 'z'; i++)

	{
		if (c == i)
		{
			return (1);
		}

	}
	return (0);
}
