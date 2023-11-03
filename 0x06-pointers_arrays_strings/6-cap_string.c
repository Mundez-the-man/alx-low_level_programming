#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string after word separators
 * @a: string to be capitalized
 *
 * Return: pointer to the converted string
 */
char *cap_string(char *a)
{
	/* Intialize counters */
	int i;
	unsigned long int n;
	/* Intilize word separataors in ASCII */
	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (islower(a[0])) /* Check if character is lowercase */
	{
		a[0] = toupper(a[0]); /* change lower case character to uppercase */
	}

	/* Check current character in string */
	for (i = 0; a[i] != '\0'; i++)
	{
		for (n = 0; n < sizeof(sep) / sizeof(sep[n]); n++)
		{
			if (a[i] == sep[n]) /*Check if character is a word separator */
			{
				if (islower(a[i + 1])) /* Check if character is lowercase */
				{
					a[i + 1] = toupper(a[i + 1]); /* change lower case character to uppercase */
				}
			}
		}
	}

	return (a);
}
