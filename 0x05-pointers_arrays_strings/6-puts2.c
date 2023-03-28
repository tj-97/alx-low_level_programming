#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: the string to be printed
 */
void puts2(char *str)
{
	int i, j, k;
	char *c = str;
	i = 0;
	j = 0;

	while (*c != '\0')
	{
		c++;
		i++;
	}
	j = i - 1;
	for (k = 0; k <= j; k++)
	{
		if (k % 2 == 0)
			_putchar(str[k]);
	}
	_putchar('\n');
}
