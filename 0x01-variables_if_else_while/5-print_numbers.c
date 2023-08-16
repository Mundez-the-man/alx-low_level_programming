#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: always 0
 */
int main(void)
{
	/*variable declaration*/
	int a = 0;
	/* for loop for printing*/
	for (a = 0; a <= 9; a++)
	{
		printf("%d", a);
	}
	printf("\n");

	return (0);
}
