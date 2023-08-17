#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	/*variable declaration*/
	int alphabet;
	int count = 0;
	/*do-while loop to print 10 times*/
	do {
		/*for loop to print lowercase alphabet*/
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	count++;
	} while (count < 10);
}
