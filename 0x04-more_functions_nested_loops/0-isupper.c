#include "main.h"

/**
 * Prototype: int _isupper(int c);
 * Returns 1 if c is uppercase
 * Returns 0 otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	return (0);

}
