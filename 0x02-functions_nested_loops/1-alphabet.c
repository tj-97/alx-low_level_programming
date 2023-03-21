#include "main.h"

/**
 * print_alphabet - increments c from 'a' to 'z'
 * and prints c followed by newline
 * 
 * c - character to be printed
 * 
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
