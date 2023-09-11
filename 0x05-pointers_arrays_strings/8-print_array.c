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

	printf("%d", a[0]);
	/* print the elements of the array */
	for (num = 1; num < n; num++)
	{
		printf(", %d", a[num]);
	}
	/*print new line after the string */
	putchar('\n');

}
