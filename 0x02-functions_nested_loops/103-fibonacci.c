#include <stdio.h>
#include "main.h"

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: Nothing.
 */

int main(void)
{
	unsigned int x, y, z;
	unsigned long count;
	x = 0;
	y = 1;

	do
	{
		z = x + y;
		x = y;
		y = z;
		count += z;
	} while (z <= 4000000);

	printf("%lu\n", count);
	return (0);
}
