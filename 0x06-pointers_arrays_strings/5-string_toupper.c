#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @a: string
 *
 * Return: pointer to the converted string
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] > 96 && a[i]  < 123) /* check if character is lowercase */
		{
			a[i] -= 32; /* change lower case character to uppercase */
		}
	}

	return (a);
}
