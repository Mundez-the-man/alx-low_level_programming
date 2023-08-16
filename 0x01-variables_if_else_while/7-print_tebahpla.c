#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and reverse
 * Return: always 0
 */
int main(void)
{
	/*variable declaration*/
	int alphabet = 'z';
	/*while loop to display letters a to z*/
	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');

	return (0);
}
