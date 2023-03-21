#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - loops print_alphabet 10x
 * prints newline
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar (c);
		}
		_putchar ('\n');
	}
}
