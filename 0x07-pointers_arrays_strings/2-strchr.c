#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string to be scanned
 * @c: character to be searched in s
 *
 * Return: pointer to first occurence of c, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	if (*s == c)
	{
		return (s);
	}

	/* Loop through the characters in the string */
	for (; *s != '\0'; s++)
	{
		/* if character matches c return its pointer */
		if (*s == c)
		{
			return (s);
		}
	}

	/* If target character is not found, return NULL */
	return (NULL);
}
