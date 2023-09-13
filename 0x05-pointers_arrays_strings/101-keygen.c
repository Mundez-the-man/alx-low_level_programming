#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int random_number;

	srand(time(NULL));

	random_number = rand();

	printf("%d\n", random_number);

	return (0);
}
