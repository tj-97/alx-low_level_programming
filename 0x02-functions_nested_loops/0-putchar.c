#include <unistd.h>
#include "main.h"
/**
 * main - entry point
 * call _putchar
 * print "_putchar"
 * Return: Always 0 (Success)
 */
int main(void)
{
	write (1, "_putchar", 8);
	_putchar ('\n');
	return (0);
}
