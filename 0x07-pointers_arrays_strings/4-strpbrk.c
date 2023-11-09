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
	unsigned int i;
	char *location;
	char *temp_accept;

	i = 0;
	/* Loop through characters in s */
	while (*(s + i) != '\0')
	{
		/* Reset temp_accept to the beginning of accept */
		temp_accept = accept;
		/* Loop through the characters of accept */
		while (*temp_accept != '\0')
		{
			if (*(s + i) == *temp_accept) /* Check for match */
			{
				location = s + i; /* Set location to the matching character in s */
				return (location); /* return the found location */
			}
			temp_accept++; /* Move to the next character in accept*/
		}
		i++; /* move to the next character in s */
	}

	return (NULL); /* If not match is found return NULL */
}
