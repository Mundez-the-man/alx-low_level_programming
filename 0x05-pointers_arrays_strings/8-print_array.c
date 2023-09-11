#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array to be printed
 * @n: number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	/* Initialize variable to count characters */
	int num;

	if (n > 0) /* Ignore the case where n is 0 or negative */
	{
		printf("%d", a[0]); /* Print the first element without a leading comma */
		/* print the remaining elements with a leading comma and space. */
		for (num = 1; num < n; num++)
		{
			printf(", %d", a[num]);
		}
	}
	/* print new line after the string or if n is 0 or negative */
	putchar('\n');

}
