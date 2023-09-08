#include <unistd.h>

/**
 * main - entry point
 *
 * Description: program that prints exactly specific text.
 *
 * Return: always 0 (success)
*/
int main(viod) 
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
