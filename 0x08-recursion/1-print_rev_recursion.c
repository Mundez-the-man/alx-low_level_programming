#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be printed
 */
void _print_rev_recursion(char *s)
{
	/* Check if null gterminator has been reached */
	if (*s)
	{
		/* Calling recursive function by increasing string's character */
		_print_rev_recursion(s + 1);
		/* print each character by recurring back */
		_putchar(*s);
	}
}
