#include "main.h"

/**
 * get_bit - function to returb nit at secific idx
 * @n: input number
 * @index: index starting 0
 * Return: 0 or 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(size_t) * 8)
		return (-1);
	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
