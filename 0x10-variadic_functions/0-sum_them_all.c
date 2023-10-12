#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: no. of arguments to pass to function
 * Return: summation of n mumbers
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;

	va_list hldr;

	va_start(hldr, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(hldr, const unsigned int);
		}
	}
	va_end(hldr);
	return (sum);
}
