#include "main.h"

/**
 * largest_number - returns largest one of 3 nums
 * @a: first number
 * @b: second number
 * @c: third number
 *
 * Return: largest number of the 3
*/

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
