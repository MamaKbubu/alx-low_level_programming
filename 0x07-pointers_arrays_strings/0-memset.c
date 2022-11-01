#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area with a constant byte
 * @s: pointer that has the address of the memory to fill
 * @b: constant byte
 * @n: the times the byte will be written into memory
 * Return: the address of th memory where the byte was written
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
