#include "main.h"
#include <stdio.h>
#include <string.h>

/**
   * _strcat - concatenate two strings
   * @dest: char string to concatenate to
   * @src: char string
   * Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	
	int index = 0, dest_len = 0;	
	while (dest[index++])
		dest_len++;
	
	for (index = 0; src[index]; index++)

	dest[dest_len++] = src[index];

	return (dest);

}
