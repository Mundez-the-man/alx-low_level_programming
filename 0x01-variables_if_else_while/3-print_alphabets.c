#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and uppercase
 * Return: always 0
 */
int main(void)
{
	/*variable declaration*/
	int alphabet = 'a';
	int capital = 'A';
	/*while loop to display lowercase a to z*/
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	/*while loop to dispkay uppercase A to Z*/
	while (capital <= 'Z')
	{
		putchar(capital);
		capital++;
	}
	putchar('\n');

	return (0);
}
