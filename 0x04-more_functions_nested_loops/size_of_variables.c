#include <stdio.h>

int main(void)
{
	char a;
	int b;
	short c;
	long d;
	long double f;
	double g;
	float h;

	printf("char = %lu\n", sizeof(a));
	printf("int = %lu\n", sizeof(b));
	printf("short = %lu\n", sizeof(c));
	printf("long = %lu\n", sizeof(d));
	printf("long double = %lu\n", sizeof(f));
	printf("double = %lu\n", sizeof(g));
	printf("float = %lu\n", sizeof(h));

	return (0);
}
