#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 or integer comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;
	/* check each string character */
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i]) /* locate the first non-equal characters */
		{
			j = s1[i] - s2[i]; /* find the difference between the characters */
			return (j); /* return the difference */
		}
	}

	return (0); /* return 0 if both strings are the same */
}
