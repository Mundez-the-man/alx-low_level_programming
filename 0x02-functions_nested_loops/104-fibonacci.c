#include <stdio.h>
#include "main.h"

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: Nothing.
 */

int main(void)
{
	double count, x, y, z;

	x = 0;
	y = 1;

	for (count = 1; count <= 97; count++)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%.0f, ", z);
	}

	printf("%.0f\n", z + x);
	return (0);
}
