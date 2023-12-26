#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: integer to be raised to the power of y
 * @y: integer power
 *
 * Return: -1 if y is negative, or the value of x raise to power y
 */
int _pow_recursion(int x, int y)
{
	/*Base case: check if y is negative */
	if (y < 0)
	{
		return (-1); /* Return -1 for invalid input */
	}
	/*Base case: check if y is equal to 0 */
	else if (y == 0)
	{
		return (1); /* Return 1 for x raised to the power of 0 */
	}
	/*calculate solution by multiplying x by itself (n - 1) times*/
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
