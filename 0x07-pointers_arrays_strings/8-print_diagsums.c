#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of a square matrix
 * @a: pointer to the square matrix
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	/* Calculate the sum of the main diagonal */
	for (i = 0; i < size; i++)
	{
		sum1 += a[i * (size + 1)];
	}

	/* Calculate the sum of the second diagonal */
	for (i = 1; i <= size; i++)
	{
		sum2 += a[(size - 1) * i];
	}

	/* Print results */
	printf("%d, %d\n", sum1, sum2);
}
