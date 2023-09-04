#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 *
 * Return: 1 is uppercase, else 0
 */
int _isupper(int c)
{
	/* check if ASCII value is between A and Z*/
	if (c >= 65 && c <= 90)
	{
		return (1); /* Return 1 if uppercase */
	}
	else
	{
		return (0); /* Return 0 if not uppercase */
	}
}
