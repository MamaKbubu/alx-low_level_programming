#include "main.h"

/**
 * factorial - returns the factorial of a numer
 * @n: number to be looked at
 * Return: the factorial of n, if n < 0 return -1
*/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
