#include <stdio.h>

int main(void)
{
	int cout = 0;
	int sum = 0;

	do 
	{
		if (cout % 3 == 0 || cout % 5 == 0)
		{
			sum += cout;
		}

		cout ++;
	} while (cout < 1024);

	printf("%d\n", sum);

	return (0);
}
