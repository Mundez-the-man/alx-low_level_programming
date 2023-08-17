#include "main.h"

/**
 * _islower - check if character is a lowercase alphabet
 *
 * @c: character to be checked
 *
 * Return: 1 when true, 0 when false
 */

int _islower(int c)
{
	/*if-else function checks of character is a lowercase alphabet*/
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
