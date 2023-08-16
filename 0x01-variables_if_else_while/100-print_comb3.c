#include <stdio.h>

/**
 * main - prints all possible combination of two digits
 * Return: 0 always
 */
int main(void)
{
	/*variable declaration*/
	int a;
	int b;
	/*for loop for printing the digits*/
	for (a = '0'; a <= '8'; a++)
	{
		for (b = '1'; b <= '9'; b++)
		{
			putchar(a);
			putchar(b);
			if (a != '8' || b != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
