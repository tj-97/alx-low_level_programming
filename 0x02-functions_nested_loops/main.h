#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * printchar -print c to stdout
 * @c - the character to print
 * return on success 1
 */
int printchar (char* c)
{
	printf ("%s\n", c);
}
