#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * @a: the integer
 * Return: numbers 0 to 9 printed
*/

void print_numbers(void)
{
	int a = 0;

	while (a < 10)
		_putchar(a++ + '0');
	_putchar('\n');
}
