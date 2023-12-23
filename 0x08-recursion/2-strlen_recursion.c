#include "main.h"

/**
 * _strlen_recursion -  returns the length of a string
 * @s: string to be counted
 *
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	/* Base Case: Check if the character is a null terminator */
	if (*s == '\0')
	{
		/* If so return 0 (base case) */
		return (0);
	}
	else
	{
		/* Recursive case: Return 1 plus he lenght of the rest of the string */
		return (1 + _strlen_recursion(s + 1));
	}
}
