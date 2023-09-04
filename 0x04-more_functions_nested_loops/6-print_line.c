#include "main.h"

/**
 * print_line - draws a straight line
 * @n: input for length of line
 */

void print_line(int n)
{
	int i;
	/* if statement to create a line */
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
