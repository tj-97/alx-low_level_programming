#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: output string
 * @src: input string
 * @n: number of bytes
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
