#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size - size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar ('\n');
	else
	{
		int x, y;

		for (y = 1; y <= size; y++)
		{
			for (x = size; x >= 1; x--)
			{
				if (x > y)
					_putchar (' ');
				else
					_putchar (35);
			}
			_putchar ('\n');
		}
	}
}
