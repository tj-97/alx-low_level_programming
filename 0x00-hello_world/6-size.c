#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("The size of a char: %lu byte(s)\n", sizeof(char));
	printf("The size of an int: %d byte(s)\n", sizeof(int));
	printf("The size of a long int: %ld byte(s)\n", sizeof(long));
	printf("The size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("The size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
