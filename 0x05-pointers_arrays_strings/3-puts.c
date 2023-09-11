#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed
 */

void _puts(char *str)
{
	/* Initialize variable to count characters */
	int count;
	/* loop through until a null character (\0) is encountered */
	for (count = 0; str[count] != '\0'; count++)
	{
		_putchar(str[count]);
	}
	/*print new line after the string */
	_putchar('\n');

}
