#include "main.h"

/**
 * set_bit - function sets value of bit to 1 at exact index.
 * @n: input number
 * @index: index, starting from 0
 * Return: 1 if it worked, or -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int s;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	s = 1;
	s = s << index;
	*n = ((*n) | s);
	return (1);
}
