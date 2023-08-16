#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0 always
 */
int main(void)
{
	/*variable declaration*/
	int num;
	int alphabet = 97;
	/*for loop for printing the digits*/
	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	/*while loop to print lowercase base 16*/
	while (alphabet <= 102)
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
