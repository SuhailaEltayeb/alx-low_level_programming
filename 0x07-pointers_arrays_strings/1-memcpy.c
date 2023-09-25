#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: memory area to copy bytes to
 * @n: number of bytes to cpy
 * @src: memory area to copy from
 * Return: a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int s = 0;
	int i = n;

	for (; s < i; s++)
	{
		dest[s] = src[s];
		n--;
	}
	return (dest);
}
