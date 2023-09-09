#include <unistd.h>
#include <stdio.h>

/**
 * main - program that prints specific text.
 *
 * Return: always return 1 (success)
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
