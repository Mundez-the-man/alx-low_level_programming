#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: destination of copied string
 * @src: string to be copied
 * @n: number of characters to be copied
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	/* copy src into dest as long as the null termintaor is not encountered*/
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	/* copy continuous '\0' into dest after src if n > size of src */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
