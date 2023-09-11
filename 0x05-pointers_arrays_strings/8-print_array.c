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
	/* loop through until a null character (\0) is encountered */
	for (num = 0; a[num] < a[n]; num++)
	{
		printf("%d", *(a + num));

		if (a[num] != a[n - 1])
		{
			printf(", ");
		}
	}
	/*print new line after the string */
	putchar('\n');

}
