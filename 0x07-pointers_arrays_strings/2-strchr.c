#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: contains the address of the string
 * @c: characrter that needs to be located in the string
 * Return: address of c
*/

char *_strchr(char *s, char c)
{
	char *i = s;

	while (*i != 0 && *i != c)
	{
		i++;
	}
	if (*i != c)
	{
		return (0);
	}
	return (i);
}
