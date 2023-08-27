#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	/* loop of 1 to 100 */
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
		}
		if ((i % 3 != 0) && (i % 5 != 0))
		{
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
	/* always return 0 */
	return (0);
}
