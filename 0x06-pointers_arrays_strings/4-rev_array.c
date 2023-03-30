#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @n: the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < (n / 2); i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
