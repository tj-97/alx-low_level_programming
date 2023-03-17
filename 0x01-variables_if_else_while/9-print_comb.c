#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b = (char)',';
	int c = (char)' ';

	for (a = 0; a < 10; a++)
	{
		putchar ('0' + a);
		if (a < 9)
			putchar (b);
			putchar (c);
	}
	putchar ('\n');
	return (0);
}
