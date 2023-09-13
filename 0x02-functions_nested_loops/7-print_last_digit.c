#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: the number tp print last digit from
 * Return: last digit of n
*/

int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = -n;

		a = n % 10;

		if (a <0)
			a = -a;
		-putchar(a + '0);
		return (a);
	}
