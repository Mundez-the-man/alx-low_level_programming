#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 * Return: always 0
 */
int main(void)
{
	/* Variable declaration */
	int cout = 0;
	int sum = 0;
	/* do while to compute */
	do {
		if (cout % 3 == 0 || cout % 5 == 0)
		{
			sum += cout;
		}

		cout++;
	} while (cout < 1024);
	/* print the computation */
	printf("%d\n", sum);

	return (0);
}
