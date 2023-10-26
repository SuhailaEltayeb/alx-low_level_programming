#include "main.h"

/**
 * binary_to_uint - function converts binary number 2 unsigned int.
 * @b: pointer to string of zeros and ones
 * Return:  the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, length, sum, power;
	int base;

	sum = 0;
	base = 2;
	power = 1;

	if (b == NULL)
		return (0);
	for (length = 0; b[length] != '\0'; length++)
		;
	if (length == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		for (j = length - 1; j > 0; j--)
			power = power * base;
		sum = sum + (power * (b[i] - 48));
		length--;
		power = 1;
	}
	return (sum);
}
