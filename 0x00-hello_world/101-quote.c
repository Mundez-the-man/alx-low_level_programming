#include <unistd.h>

/**
 * main - prints to the standard error
 * Return: Always 1
 */
int main(void)
{
	/*Declaration and initialization*/
	char m[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	/*write m to the standard error*/
	write(2, m, sizeof(m) - 1);
	/*returns the exit code 1*/
	return (1);
}
