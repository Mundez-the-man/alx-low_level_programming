#include "main.h"

/**
 * cap_string - capitalizes all words of a string after word separators
 * @a: string to be capitalized
 *
 * Return: pointer to the converted string
 */
char *cap_string(char *a)
{
	/* Initialize counters */
	int i, n;
	/* Intilize word separataors in ASCII */
	int cap[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; a[i] != '\0'; i++)
	{
		for (n = 0; cap[n] != '\0'; n++)
		{
			if (a[i] == cap[n])
			{
				if (a[i + 1] > 96 && a[i + 1]  < 123)
				{
					a[i + 1] -= 32; /* change lower case character to uppercase */
				}
			}
		}
	}

	return (a);
}
