#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed in reverse
 */

void print_rev(char *s)
{
	/* Initialize variable to count characters */
	int count;
	/* loop to count length of string */
	for (count = 0; s[count] != '\0'; count++)
	{
	}
	/* print the characters of a string in reverse */
	while (count >= 0)
	{
		_putchar(s[count]);
		count--;
	}
	/*print new liine after the string */
	_putchar('\n');

}
