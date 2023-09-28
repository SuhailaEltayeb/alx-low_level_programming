#include "main.h"

/**
 * square_root - returns natural square root of n
 * @n: input value
 * Return: square root of n, or -1
*/

int square_root(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b  > 4)
	{
		return (-1);
	}
	return (square_root(a, b + 1));
}

/**
 * _sqrt_recursion - function returns  natural square root of number
 * @n: intiger to be squared
 * Return: square of n,
 * -1 If n does not have a natural square root
*/

int _sqrt_recursion(int n)
{
	return (square_root(n, 0));
}
