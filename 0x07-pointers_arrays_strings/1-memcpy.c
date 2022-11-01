#include "main.h"

/**
 * _memcpy - copies memory area fromthe source to desst n amount of times
 * @dest: pointer that will receiver th copied information
 * @src: pointer that has the info to be copied
 * @n: number of times information will be copied
 * Return: destination
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
