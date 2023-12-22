#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	/* Check if the end of the string has been reached */
	if (*s == '\0')
	{
		_putchar('\n'); /* print a new line */
		return; /* Exit the function */
	}
	else
	{
		/* prints the characters of a string */
		_putchar(*s);	
		/* if not, make a recursive call to with the next character */
		_puts_recursion(s + 1);
	}
}
