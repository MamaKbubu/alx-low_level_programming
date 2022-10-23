#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @i: the number
 * Return: value of the last digit
*/

int print_last_digit(int i)
{
	int k;

	k = i % 10
	if (k < 0)
	{
		_putchar(-k + 48);

		return (-k);
	}
	else
	{
		_putchar(-k + 48);
		return (k);
	}
}
