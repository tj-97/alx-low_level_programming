#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the main string to be scanned
 * @accept: the string containing the list of characters
 * to match in s
 * Return: the number of bytes in the inital segment of s which
 * consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);

	return (len);
}
