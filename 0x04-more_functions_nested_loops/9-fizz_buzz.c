#include <stdio.h>
#include "main.h"

/**
 * main - prints numbers 1-100, followed by a new line
 * for multiples of 3 prints "Fizz"
 * for multiples of 5 prints "Buzz"
 * for multiples of 3 and 5 prints "FizzBuzz"
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100;  n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((n % 3) == 0 && (n % 5) != 0)
		{
			printf("Fizz ");
		}
		else if ((n % 5) == 0 && (n % 3) != 0)
		{
			printf("Buzz ");
		}
		else
			printf("%d ", n);
	}
	printf("\n");
	return (0);
}
