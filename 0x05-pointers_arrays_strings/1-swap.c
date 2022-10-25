#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps two integers
 * @a: first integer
 * @b: secong integer
*/

void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
