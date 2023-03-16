#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("The size of a char: %c byte(s)", sizeof(char));
       	printf("The size of an int: %d byte(s)", sizeof(int));
	printf("The size of a long int: %ld byte(s)", sizeof(long int));
	printf("The size of a long long int: %lld byte(s)", sizeof(long long int));
	printf("The size of a float: %f byte(s)", sizeof(float));
	return (0);
}
