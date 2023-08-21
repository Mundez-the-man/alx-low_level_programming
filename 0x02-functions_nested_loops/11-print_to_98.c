/* Libararies used */
#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
	/* while loop to print the values of n if n is not equal 98 */
	while (n != 98)
	{
		printf("%d, ", n);
		n += (n < 98) ? 1: -1;
	}

	/* print the value of n when it is equal to 98 */
	printf("%d\n", n);
}
