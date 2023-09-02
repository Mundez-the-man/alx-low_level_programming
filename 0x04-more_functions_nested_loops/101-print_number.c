#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: Integer to be printed
 */
void print_number(int n)
{
	int m, i;
	/* variable assignment */
	i = 1;
	/* change negative number to positive */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	/* while statement creates a counter for dividing 9 */
	m = n;
	while (m > 9)
	{
		m /= 10;
		i *= 10;
	}
	/* while statement to print out the digits of n from left to right */
	while (i > 0)
	{
		_putchar('0' + n / i % 10);
		i /= 10;
	}
}
