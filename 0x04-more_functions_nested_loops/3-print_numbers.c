#include "main.h"

/**
 * print_numbers -  prints the numbers, from 0 to 9
 */

void print_numbers(void)
{
	char i;
	/* for loop to print the digits */
	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
