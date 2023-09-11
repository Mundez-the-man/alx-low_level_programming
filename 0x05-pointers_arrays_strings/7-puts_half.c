#include "main.h"

/**
 * puts2 - prints even characters of a string
 * @str: string to be printed
 */

void puts_half(char *str)
{
	/* Initialize variable to count characters */
	int count, half, i;
	/* loop through until a null character (\0) is encountered */
	for (count = 0; str[count] != '\0'; count++)
	{
	}

	if (count % 2 == 0)
	{
		half = count / 2;
	}
	else
	{
		half = count / 2 + 1;
	}

	for (i = half; i <= count; i++)
        {
		_putchar(str[i]);
        }
	/*print new liine after the string */
	_putchar('\n');

}
