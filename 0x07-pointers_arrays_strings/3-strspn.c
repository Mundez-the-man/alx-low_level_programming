#include "main.h"

/**
 * _strspn -  a function that gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing characters to be matched with s
 *
 * Return: number of characters in the initial segement of s
 * which consists of only charactres from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, m, n;

	n = 0;

	/* Check through the characters of s */
	for (; *s != '\0'; s++)
	{
		m = 0;

		/* Check occurence of s character in string accept */
		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (*s == *(accept + i))
			{
				m = 1;
				n++; /* counter for occurence of s character in accept */
				break; /* Break from innerloop on occurnce of s character */
			}
		}

		/* If s character is not found in accept, return 0 */
		if (m == 0)
		{
			return (n);
		}
	}

	return (n);
}
