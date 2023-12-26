#include "main.h"

/**
 * find_sqrt - helper function to find the natural square root of a number
 * @n: integer to be square rooted
 * @r: Current guess for the square root of n
 *
 * Return: -1 if n is less than 0 or n does not have a natural square root,
 * otherwise returns the square root of n
 */
int find_sqrt(int n, int r)
{
	/* Base case: check if n does not have a natural square root */
	if (r * r > n)
	{
		return (-1); /* If true return error */
	}
	/* Check if r is the square root of n */
	else if (r * r == n)
	{
		return (r);/* If true return r */
	}
	/* Recursive case: check for square root by incrementing */
	else
	{
		return (find_sqrt(n, r + 1));
	}
}

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: integer to be square rooted
 *
 * Return: -1 if n is less than 0 or n does not have a natural square root,
 * otherwise returns the square root of n
 */
int _sqrt_recursion(int n)
{
	/* Check if n is less than 0 */
	if (n < 0)
	{
		return (-1); /* Return error if true */
	}
	/* If n is non-negative, pass it to the helper function find_sqrt*/
	return (find_sqrt(n, 0));
}
