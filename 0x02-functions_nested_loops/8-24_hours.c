#include "main.h"

void jack_bauer(void)
{
	int a, c, d;

	for (a = 0; a < 24; a++)
	{

			for (c = 0; c <= 5; c++)
			{

				for (d = 0; d <= 9; d++)
				{
					_putchar('0' + a / 10);
					_putchar('0' + a % 10);
					_putchar(':');
					_putchar('0' + c);
					_putchar('0' + d);
					_putchar('\n');
				}
			}
	}
}
