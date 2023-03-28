#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 */
void puts_half(char *str)
{
	int i, j, k;
	
	i = 0;

	for (k = 0; str[k] != '\0'; k++)
		i++;

	j = (i / 2);

	if ((i % 2) == 1)
		j = ((i + 1) / 2);

	for (k = j; str[k] != '\0'; k++)
		_putchar(str[k]);

	_putchar('\n');
}
