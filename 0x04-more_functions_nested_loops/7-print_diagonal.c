#include "main.h"

/**
 * print_line - draws a diagonal line
 * @n: input for length of diagonal line
 */

void print_diagonal(int n)
{
	int i, j;
	/* print new line if n is 0 or less */
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' '); /* Print spaces before each backslash */
			}
		_putchar('\\'); /* Print the diagonal backslash */
		_putchar('\n');	/* Move to the next line */
		}
	}
}
