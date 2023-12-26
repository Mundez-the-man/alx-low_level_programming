#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * @n: number whose factorial is to be found
 *
 * Return: -1 if n is a negative number, otherwise return the factorial of n
 */
int factorial(int n)
{
	/* Base case: Check if n is negative */
	if (n < 0)
	{
		return (-1); /* Return -1 for invalid input */
	}
	/* Base case: Check if n is 0 */
	else if (n == 0)
	{
		return (1); /* Return 1 for the factorial of 0 */
	}
	/* Calculate factorial by multiplying n with factorial of (n-1) */
	else
	{
		return (n * factorial(n - 1));
	}
}
