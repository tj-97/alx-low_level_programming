#include <stdio.h>
/**
 * main - entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar ('0' + n); /* the argument to putchar is the ascii code of the char being printed */
	}
	putchar ('\n');
	return (0);
}
