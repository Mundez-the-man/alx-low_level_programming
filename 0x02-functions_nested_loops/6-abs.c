#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @a: integer being checked
 *
 * Return: always a
 */

int _abs(int a)
{
	/*if statement in the case of a negative number*/
	if (a < 0)
	{
		a -= (2 * a);
	}

	return (a);
}
