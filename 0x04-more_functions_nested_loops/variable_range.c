#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("Range of signed int \n%d  to %d\n", INT_MIN, INT_MAX);
	printf("Range of unsigned int \n0 to %u\n\n", UINT_MAX);

	printf("Range of signed char \n%d  to %d\n", SCHAR_MIN, SCHAR_MAX);
        printf("Range of unsigned char \n0 to %u\n\n", UCHAR_MAX);

	printf("Range of signed short \n%d  to %d\n", SHRT_MIN, SHRT_MAX);
        printf("Range of unsigned short \n0 to %u\n\n", USHRT_MAX);

	printf("Range of signed long \n%ld  to %ld\n", LONG_MIN, LONG_MAX);
        printf("Range of unsigned long \n0 to %lu\n\n", ULONG_MAX);

	return (0);
}
