#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: the number tp print last digit from
 * Return: last digit of n
*/

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
