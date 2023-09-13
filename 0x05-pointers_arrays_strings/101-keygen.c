#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));

	int random_number;
	
	random_number = rand();

	printf("%d\n", random_number);

	return (0);
}
