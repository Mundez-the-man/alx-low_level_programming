#include "main.h"

/**
 * more_number - prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int count;
	char i;
	/* variable initialization */
	count = 0;
	/* while loop to print 10 lines */
	while (count < 10)
	{
		/* for loop to print numbers */
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar('0' + i / 10);
			}
			_putchar('0' + i % 10);
		}
		_putchar('\n');
		count++;
	}
}
