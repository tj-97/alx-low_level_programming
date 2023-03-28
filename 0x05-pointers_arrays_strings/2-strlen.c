#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: the string to be checked
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
