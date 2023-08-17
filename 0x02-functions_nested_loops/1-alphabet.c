#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase
 */
void print_alphabet(void)
{
	/*variable declaration*/
	int alphabet;
	/*for loop to print lowercase alphabet*/
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
