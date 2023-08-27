#include "main.h"

/**
 * print_most_numbers -  prints the numbers, from 0 to 9
 * except 2 and 4
 */

void print_most_numbers(void)
{
	char i;
	/* for loop to print the digits */
	for (i = 0; i < 10; i++)
	{
		/* if statement not to print for 2 and 4 */
		if (i != 2)
		{
			if (i != 4)
			{
				_putchar('0' + i);
			}
		}
	}
	_putchar('\n');
}
