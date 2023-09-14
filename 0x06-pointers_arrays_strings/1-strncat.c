#include "main.h"

/**
  *_strncat - concatenates two strings
  *@dest: string 1
  *@src: string 2
  *@n: maximum number of characters to be appended
  *
  *Return: concatenated string
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++) /* count elements in string 1 */
	{
	}
	/* add string 2 to string 1 for a maximum of n characters */
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		*(dest + (j + i)) = src[j];
	}
	/* add terminating null byte if string 1 was less than n characters */
	if (j < n)
	{
		*(dest + (j + i)) = '\0';
	}

	return (dest);
}
