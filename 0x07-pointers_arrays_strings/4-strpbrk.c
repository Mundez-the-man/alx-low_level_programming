#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: C string to be scanned
 * @accept: string containing characters to be scanned
 *
 * Return: pointer to the character in s that matches accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp_accept;

	/* Loop through characters in s */
	while (*s != '\0')
	{
		/* Reset temp_accept to the beginning of accept */
		temp_accept = accept;
		/* Loop through the characters of accept */
		while (*temp_accept != '\0')
		{
			if (*s == *temp_accept) /* Check for match */
			{
				return ((char *)s); /* return the found location */
			}
			temp_accept++; /* Move t:o the next character in accept*/
		}
		s++; /* move to the next character in s */
	}

	return (NULL); /* If not match is found return NULL */
}
