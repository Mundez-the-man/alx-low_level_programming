#include "main.h"

/**
 * print_sign - function to print the sign of a number
 *
 * @n : paramenter to be checked
 *
 * Return: 1, 0, or -1
 */

int print_sign(int n)
{
	/*check if n is greater than 0*/
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	/*check is n is equal to 0*/
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	/*check if n is less than 0*/
	{
		_putchar('-');
		return (-1);
	}
}
