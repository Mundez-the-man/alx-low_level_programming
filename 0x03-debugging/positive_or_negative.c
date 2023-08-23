#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - to check if number is positive, negative, or zero
 * Return: always 0
 */
void positive_or_negative(int i)
{
	/* if else statement to check i */
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is positive\n", i);
	}
}
