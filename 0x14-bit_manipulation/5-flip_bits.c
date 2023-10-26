#include "main.h"

/**
 * flip_bits- function to return #of bits to flip
 * @n: input number 1
 * @m: input number 2
 * Return: # of bits to be shifted
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int c;
	unsigned long int r;

	r = n ^ m;
	for (c = 0; r > 0;)
	{
		if ((r & 1) == 1)
			c++;
		r = r >> 1;
	}
	return (c);
}
