#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse and adds a new line using
 * recursion
 * @s: pointer that has the address of the string to be printed
 * Return: print a string in reverse
*/
void _print_rev_recursion(char *s)
{
	char *rev;

	rev = s;
	if (*rev != 0)
	{
		_print_rev_recursion(rev + 1);
		_putchar(*s);
	}
}
