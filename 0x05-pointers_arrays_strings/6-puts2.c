#include "main.h"

/**
 * puts2 - prints even characters of a string
 * @str: string to be printed
 */

void puts2(char *str)
{
	/* Initialize variable to count characters */
	int count;
	/* loop through until a null character (\0) is encountered */
	for (count = 0; str[count] != '\0'; count++)
	{
		/* print even chacters only */
		if (count % 2 == 0 || count == 0)
		{
			_putchar(str[count]);
		}
	}
	/*print new line after the string */
	_putchar('\n');

}
