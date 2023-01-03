#include "main.h"
/**
   * _memcpy - copies from source to dest values in array
   * @dest: destination to copy to
   * @src: source to copy from
   * @n: n amount of time
   * Return: return the string value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);

}
