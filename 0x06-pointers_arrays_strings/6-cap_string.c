#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @a: string
 *
 * Return: pointer to the converted string
 */
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == 32 || a[i] == 9 || a[i] == 10 || a[i] == 44)
			if (a[i + 1] > 96 && a[i + 1]  < 123) /* check if character is lowercase */
			{
				a[i + 1] -= 32; /* change lower case character to uppercase */
			}
		if ( a[i] == 59 || a[i] == 46 || a[i] == 33 || a[i] == 63 )
			if (a[i + 1] > 96 && a[i + 1]  < 123) /* check if character is lowercase */
			{
				a[i + 1] -= 32; /* change lower case character to uppercase */
			}
		if ( a[i] == 34 || a[i] == 40 || a[i] == 41 || a[i] == 123 || a[i] == 125)
			if (a[i + 1] > 96 && a[i + 1]  < 123) /* check if character is lowercase */
			{
				a[i + 1] -= 32; /* change lower case character to uppercase */
			}
	}

	return (a);
}
