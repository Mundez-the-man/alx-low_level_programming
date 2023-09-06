#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse
 * @s: string to be printed in reverse
 */

void rev_string(char *s)
{
	/* Initialize variable to count characters */
	char c[1000];
	int count, i;
	i = 0;
	/* loop to count length of string */
	for (count = 0; s[count] != '\0'; count++)
	{
	}

	while (i <= count)
	{
		c[i] = s[i];
		i++;
	}
	
	for (i = 0; i <= count; i++)
	{
		s[i] = c[count - i - 1];
	}
}
