#include <stdio.h>
#include "main.h"

/**
 * main - prints the sum of the even-valued terms
 * Return: Nothing.
 */
int main(void)
{
	/* variable declaration */
	unsigned int x = 0;
	unsigned int y = 1;
	unsigned int z;
	unsigned long count;
	/* do-while statement to get the sum of the even Fibonacci numbers */
	do {
		z = x + y;
		x = y;
		y = z;

		if (z % 2 == 0)
		{
			count += z;
		}
	} while (z <= 4000000);

	printf("%lu\n", count);
	return (0);
}
