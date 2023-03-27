#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: the integer to swap with b
 * @b: the integer to swap with a
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
