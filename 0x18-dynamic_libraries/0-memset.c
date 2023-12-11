#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @b: constant byte
 * @s: pointer to starting address in memory
 * @n: number of bytes to be filled
 *
 * Return: a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0 ; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
