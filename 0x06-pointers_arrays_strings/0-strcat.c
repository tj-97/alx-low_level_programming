#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: output string
 * @src: input string
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	char concat[100];

	strcpy(concat, dest);
	strcpy(concat, src);
	
	return (dest);
}
