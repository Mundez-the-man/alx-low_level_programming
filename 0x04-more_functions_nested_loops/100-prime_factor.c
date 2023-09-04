#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number
 *
 * Return: always 0
 */

int main(void)
{
	long n, i;
	/*variable assigning */
	n = 612852475143;
	/* while statement to eliminate all even numbers */
	while (n % 2 == 0)
	{
		n /= 2;
	}
	/* for loop to check for odd prime factors */
	for (i = 3; i * i <= n; i = i + 2)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}
	/* if n is greater than prime factor 2, print n */
	if (n > 2)
	{
		printf("%ld\n", n);
	}
	else
	{
		printf("2\n");
	}
	/* return 0 */
	return (0);
}
