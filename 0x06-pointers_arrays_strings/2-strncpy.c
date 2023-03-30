#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: output string
 * @src: input string
 * @n: number of characters
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
