#include "main.h"
#include <unistd.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	write (1, "_putchar", 8);
	_putchar ('\n');
	return (0);
}
