#include "main.h"

/**
  * _atoi - a function that convert a string to an integer
  * @s: pointer to the string to be converted
  *
  * Return: integer value
  */
int _atoi(char *s)
{
	/* Variable declaration */
	unsigned int num, sign, count;
	/* variab;e assigning */
	num = 0;
	sign = 1;
	/* check each element of the array */
	for (count = 0; *(s + count) != '\0'; count++)
	{
		/* if element is an integer compute it to and ignore non-integers */
		if (*(s + count) >= '0' && *(s + count) <= '9')
		{
			num = num * 10 + (*(s + count) - '0');
			/* break once the number ends */
			if (!(*(s + (count + 1)) >= '0' && *(s + (count + 1)) <= '9'))
			{
				break;
			}
		}
		/* if negative signs are present before the integer, compute the sign */
		else if (*(s + count) == '-')
		{
			sign *= -1;
		}
	}
	/* return the signed integer */
	return (sign * num);
}


