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
		putchar ('0' + n);
	}
	putchar ('\n');
	return (0);
}