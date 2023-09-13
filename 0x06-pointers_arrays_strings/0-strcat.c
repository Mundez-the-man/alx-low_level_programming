#include "main.h"

/**
  *_strcat - concatenates two strings
  *@dest: string 1
  *@src: string 2
  *
  *Return: concatenated string
  */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++) /* count elements in string 1 */
	{
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		*(dest + (j + i)) = src[j]; /* add string 2 to string 1 */
	}

	*(dest + (j + i)) = '\0'; /* add terminating null byte */

	return (dest);
}
