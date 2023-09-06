#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: string to be printed in reverse
 */
void rev_string(char *s)
{
	/* Initialize variables */
	char c[1000];
	int count, i;
	/* loop to count length of string */
	for (count = 0; s[count] != '\0'; count++)
	{
	}
	/* copy string s into c */
	for (i = 0; i <= count; i++)
	{
		c[i] = s[i];
	}
	/* reverse the string and copy it into s */
	for (i = 0; i <= count; i++)
	{
		s[i] = c[count - i - 1];
	}
}
