#include "main.h"

/**
 * clear_bit - function sets value of bit to 0 at specific index.
 * @n: input number
 * @index: index, strting 0
 * Return: Returns: 1 if it worked, or -1 otherwisw
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int s;

	s = 1;
	s = s << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = s ^ *n;
	return (1);
}
