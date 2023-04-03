#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory
 * area dest
 * @dest: the destination array to which the content is
 * to be copied
 * @src: the source of data to be copied
 * @n: the number of bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
