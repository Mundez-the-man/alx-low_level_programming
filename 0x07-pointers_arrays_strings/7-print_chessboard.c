#include "main.h"

/**
 * print_chessboard -  prints the chessboard
 * @a: pointer to an array of characters
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++) /* Loop through each row */
	{
		/* Loop through each column in the current row */
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]); /* Print character */
			if (j == 7) /* Check if it's last column in the row */
			{
				_putchar('\n'); /* print new line */
			}
		}
	}
}
