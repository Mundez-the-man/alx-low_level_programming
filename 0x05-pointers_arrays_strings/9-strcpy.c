#include "main.h"

/**
*_strcpy - a function that copies the string
*@dest: destination buffer
*@src: source string
*Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;
	/* Assign src into dest */
	for (i = 0; (dest[i] = src[i]) != '\0'; i++)
	{
	}
	return (dest);
}

