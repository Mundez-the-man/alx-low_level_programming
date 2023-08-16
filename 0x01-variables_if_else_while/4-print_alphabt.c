#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e
 * Return: always 0
 */
int main(void)
{
	/*variable declaration*/
	int alphabet = 'a';
	/*for loop to display letters*/
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
	}
	putchar('\n');

	return (0);
}
