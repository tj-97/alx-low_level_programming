#include "main.h"
/**
* print_sign(int n): prints the sign of a number
* @n: the number to be checked
* Returns 1 and prints + if n is greater than zero
* Returns 0 and prints 0 if n is zero
* Returns -1 and prints - if n is less than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar (43);
		return (1);
	} else if (n < 0)
	{
		_putchar (45);
		return (-1);
	} else
	{
		_putchar ('0');
		return (0);
	}
}
