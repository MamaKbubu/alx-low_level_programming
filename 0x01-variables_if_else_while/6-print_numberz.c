#include <stdio.h>
/**
 * main - print number of base 10 starting from 0 followed by a new line
 *
 * Return: Always 0
*/
int main(void)
{
	int numb;

	for (numb = 0; numb < 10; numb++)
		putchar(numb % 10 + '0');
	putchar('\n');
	return (0);
}
