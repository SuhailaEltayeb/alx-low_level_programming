#include "main.h"

/**
 * factorial - function returns factorial of given number
 * @n: number to return its factorial
 * Return: factorial if > 0
 * if n < 0, return -1 to indicate error
*/

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
