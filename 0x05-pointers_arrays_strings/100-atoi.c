#include "main.h"

/**
  * _atoi - a function that convert a string to an integer
  * @s: pointer to the string to be converted
  *
  * Return: signed integer
  */
int _atoi(char *s)
{
	int num, sign, count;

	num = 0;
	sign = 1;

	for (count = 0; *(s + count) != '\0'; count++)
	{
		if ( *(s + count) >= '0' && *(s + count) <= '9')
		{
			num = num * 10 + *(s + count) - '0';

			if ( !(*(s + (count + 1)) >= '0' && *(s + (count + 1)) <= '9'))
			{
				break;
			}
		}
		else
		{
			if ( *(s + count) == '-')
			{
				sign *= -1;
			}
		}
	}

	return (sign * num);

}


