#include "main.h"

/**
 * more_numbers - prints 0-14 ten times
 */

void more_numbers(void)
{
	int a; 
	long b;

	while (a < 11)
	{
		a++;
		for (b = 0; b <= 14; b++)
		{
			if (b < 10)
			{
				_putchar ((b / 10) + '0');
			}
			_putchar ((b % 10) + '0');
		}
		_putchar ('\n');
	}
}
