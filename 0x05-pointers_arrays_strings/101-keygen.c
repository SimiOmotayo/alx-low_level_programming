#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * a program that generates random valid passwords 
 * for the program 101-crackme
 */

int main(void)
{
	int thisrand;
	int count;
	int key;

	srand(time(NULL));
	for (count = 0, key = 2772; key > 122; count++)
	{
		thisrand = (rand() % 125) + 1;
		printf("%c", thisrand);
		key -= thisrand;
	}
	printf("%c", key);

	return (0);

}

