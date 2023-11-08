#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: pointer to the destination array
 * @src: pointer to the source of data is to be copied
 * @n: number of bytes to be copied
 *
 * Return: a pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	/* copies data from src up to n character to dest pointer */
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
