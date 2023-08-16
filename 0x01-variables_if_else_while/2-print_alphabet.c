#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: always 0
 */
int main()
{
	/*variable declaration*/
	int alphabet = 'a';
	/*while loop to display letters a to z*/
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}

	

