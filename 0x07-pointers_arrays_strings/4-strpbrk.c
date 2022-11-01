#include "main.h"

/**
 * _strpbrk - searches for any of a set of bytes
 * @s: a pointer that contains the address of the string
 * @accept: pointer that contains the string to evaluate s
 * Return: the address of the first occurence
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != 0)
	{
		for (i = 0; accept[i] != 0; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
