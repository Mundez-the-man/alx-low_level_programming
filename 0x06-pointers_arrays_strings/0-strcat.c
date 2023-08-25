#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory
 * @b: constant byte used to replace
 * @n: number of  bytes to replace
 * Description: fills memory s with byte b for n bytes
 * Return: pointer to memory
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (; n > 0; n--)
	{
		dest[n - 1] = src[n - 1];
	}

	return (dest);
}
