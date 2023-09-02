#include <stdio.h>

int main(void)
{
	long n, i;

	n = 612852475143;

	while (n % 2 == 0)
	{
		n /= 2;
	}

	for (i = 3; i*i <= n; i = i+2)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}

	if (n > 2)
	{
		printf("%ld\n", n);
	}
	else
	{
		printf("2\n");
	}

	return (0);
}
