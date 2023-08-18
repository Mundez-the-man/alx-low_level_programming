#include "main.h"

int print_last_digit(int r)
{
	r = r % 10;
	if (r < 0)
	{
		r -= (r * 2);
	}
	_putchar('0' + r);

	return (r);
}
