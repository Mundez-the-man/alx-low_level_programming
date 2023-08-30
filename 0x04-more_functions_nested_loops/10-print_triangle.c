#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 */

void print_triangle(int size)
{
	int i, j;
	/* if size is greater than 0 print square */
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - i; j++)
			{
				_putchar(' ');
			}
			for (j = size - i; j < size ; j++)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}
	}
}
