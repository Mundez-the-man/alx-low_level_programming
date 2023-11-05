#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The input string to be encoded
 *
 * Return: A pointer to the encoded string
 */

char *leet(char *str)
{
	int i, n;
	char leetMap[] = "aAeEoOtTlL";
	char leetReplacements[] = "4433007711";

	/* Loop through each character in the input string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* check each character to be replaced */
		for (n = 0; leetMap[n] != '\0'; n++)
		{
			/* Compare character in string with one to be replaced */
			if (str[i] == leetMap[n])
			{
				/* Replace string character with "1337" character */
				str[i] = leetReplacements[n];
				break; /* Exit loop if replacement occurs */
			}
		}
	}

	return (str); /* Return encoded string */
}
