#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times to print /
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		int x, y;

		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				if (y == x)
					_putchar (92);
				else if (y < x)
					_putchar (' ');
			}
			_putchar ('\n');
		}
	}
}