#include "main.h"

/**
 * times_table - a function that prints the 9 times table
 */
void times_table(void)
{
	/*variables declaration*/
	int i, j, mul;

	/*for loops to produce the times table of 9*/
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mul = i*j;
			
			/* if statement for first space after the comma*/
			if (j !=0 )
			{
				_putchar(' ');
				
				/*if statement for second space after ',' for multiples less than 9*/
				if (mul < 10)
				{
					_putchar(' ');
				}
			}
			
			/*if statement for the digit in the tens position*/
			if (mul >= 10)
			{
				_putchar('0' + mul / 10);
			}
			
			/*to get the digits in the ones position*/
			_putchar('0' + mul % 10);

			/*if statement to print ',' after all multiples except for multiples of 9*/
			if (j != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
