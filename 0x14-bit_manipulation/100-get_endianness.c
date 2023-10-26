#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x;
	int big_little_indn;

	big_little_indn = (int) (((char *)&x)[0]);
	return (big_little_indn);
}
