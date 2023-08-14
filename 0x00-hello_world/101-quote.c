#include <unistd.h>
#include <string.h>

/**
 * main - uses the write system call to write the contents to the standard error stream
 * Return: Always 1
 */
int main(int argc, char *argv[])
{
	char buf[]= "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, buf, strnlen(buf, sizeof(buf)));

	return (1);
}
