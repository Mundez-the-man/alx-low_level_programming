#include <stdio.h>

/**
 * main - prints all possible combination of single digit numbers
 * Return: 0 always
 */
int main(void)
{
	/*variable declaration*/
	int a;
	/*for loop for printing the digits*/
	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}

	return (0);
}
