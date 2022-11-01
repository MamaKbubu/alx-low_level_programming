#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: pointer to the matrix containing the chessboard
 * Return: Nothing
*/
void print_chessboard(char (*a)[8])
{
	int r, n;

	for (r = 0; r < 8; r++)
	{
		for (n = 0; n < 8; n++)
		{
			_putchar(a[r][n]);
		}
		_putchar(10);
	}
}
