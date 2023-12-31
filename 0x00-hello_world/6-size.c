#include <stdio.h>

/**
 * main - to print the size of various types
 * Return: Always 0
 */
int main(void)
{
	/*sizeof evaluates the size of the variables*/
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));

	return (0);
}
