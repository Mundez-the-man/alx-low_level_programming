#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string to be scanned
 * @needle: substring to be found
 *
 * Return: pointer to occurence of substring in haystack
 * or NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	if (needle[0] == '\0')
	{
		return (haystack); /*if substring is empty, return original string */
	}
	for (i = 0; haystack[i] != '\0'; i++) /*loop characters of main string */
	{
		j = 0; /* Reset substring index for each main string character */

		/* check through characters of substring */
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
		{
			j++; /* Move to the next character in both strings */
		}
		if (needle[j] == '\0') /* check if entire substring has been checked */
		{
			return (&haystack[i]); /* return staring location of substring */
		}
	}
	return (NULL); /* return NULL if substring is not found */
}
