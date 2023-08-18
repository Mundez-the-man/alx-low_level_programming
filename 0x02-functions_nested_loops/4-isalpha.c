#include "main.h"

/**
 * _isalpha - check if a character is an alphabet
 *
 * @c: character to be checked
 *
 * Return: 1 when true, 0 when false
 */

int _isalpha(int c)
{
	/*if-else function checks of character is an alphabet*/
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
