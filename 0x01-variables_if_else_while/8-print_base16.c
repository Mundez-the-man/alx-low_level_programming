#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
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
	}
	putchar('\n');

	return (0);
}
