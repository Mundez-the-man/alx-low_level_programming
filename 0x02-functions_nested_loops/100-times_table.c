#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: number of times table
 * Return: nothing
 */
void print_times_table(int n)
{
	/*variables declaration*/
	int i, j, mul;

	if (n < 0 || n > 15)
		return;
	/*for loops to produce the times table of n*/
	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < n + 1; j++)
		{
			mul = i * j;
			/* if statements to print space(s) */
			if (j != 0)
			{
				_putchar(' ');
				if (mul < 100)
					_putchar(' ');
				if (mul < 10)
					_putchar(' ');
			}
			/* Print the multiples and ',' */
			if (mul > 99)
				_putchar('0' + mul / 100);
			if (mul > 9)
				_putchar('0' + mul % 100 / 10);
			_putchar('0' + mul % 10);
			if (j != n)
				_putchar(',');
		}
		_putchar('\n');
	}
}
