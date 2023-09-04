#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: character to be checked
 *
 * Return: 1 if c is a digit, else 0
 */
int _isdigit(int c)
{
	/* check if ASCII value is between value of digits 0 and 9*/
	if (c >= 48 && c <= 57)
	{
		return (1); /* Return 1 if c is a digit */
	}
	else
	{
		return (0); /* Return 0 if c is not a digit */
	}
}
