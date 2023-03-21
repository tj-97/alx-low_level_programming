#include "main.h"

/**
 * main - entry point
 * print_alphabet - increments c from 'a' to 'z'
 * and prints c followed by newline
 * return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar (c);
	}
	_putchar ('\n');
}
