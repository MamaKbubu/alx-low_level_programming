#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps the value of two integers
 *@a: int a
 *@b: int b
*/

void swap_int(int a*, int *b)
{
	int q = *a;
	*a = *b;
	*b = q;
}
