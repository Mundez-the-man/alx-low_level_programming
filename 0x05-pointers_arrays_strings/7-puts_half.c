#include "main.h"

/**
 * puts_half - prints half a string
 * @str: string to be printed
 */

void puts_half(char *str)
{
	/* Initialize variables */
	int count, half;
	/* calculate lenght of string */
	for (count = 0; str[count] != '\0'; count++)
	{
	}
	/* Calculate the starting position of printing */
	half = (count + 1) / 2;
	/* print second half of string */
	for (; str[half] != '\0'; half++)
	{
		_putchar(str[half]);
	}
	/*print new liine after the string */
	_putchar('\n');

}
