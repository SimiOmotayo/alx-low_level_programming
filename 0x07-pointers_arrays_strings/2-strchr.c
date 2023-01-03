#include "main.h"
/**
   * _strchr - locates character in string
   * @s: string to locate char
   * @c: character to find
   * Return: character value
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{

		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);

}

