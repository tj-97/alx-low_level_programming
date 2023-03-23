#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times to print the character '_'
 */
void print_line(int n)
{
	int a = 1;

	while (a <= n)
	{
		a++;
		_putchar ('_');
		if (a <= 0)
		{
			_putchar ('\n');
		}
	}
	_putchar ('\n');
}
