#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the block of memory to be filled
 * @b: value to be set
 * @n: number of bytes to be set to that value
 *
 * Return: a pointer to the memory area *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/* loop to change the value of all charatcers of the string to size n */
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
