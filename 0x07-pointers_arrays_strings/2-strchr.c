#include "main.h"

/**
 * _strchr - locates the first occurrence of a character in a string
 * @s: the string to be searched
 * @c: the character to be located
 * Return: A pointer to the first occurrence of the character c
 * in a string, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *ret;

	ret = strchr(s, c);

	return (ret);
}
