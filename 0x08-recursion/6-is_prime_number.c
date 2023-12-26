#include "main.h"

/**
 * find_prime - checks if input is a prime number
 * @n: input to be checked
 * @p: divisor to check if n is prime
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int find_prime(int n, int p)
{
	if (p <= n / 2)
	{
		if (n % p == 0)
		{
			return (0); /* Not a prime */
		}
		/* Recursively check for divisibility by the next number */
		return (find_prime(n, p + 1));
	}
	return (1); /* Prime number */
}

/**
 * is_prime_number - checks if input is a prime number
 * @n: input to be checked
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0); /* 0 and 1 are not prime numbers */
	}
	return (find_prime(n, 2));
}
