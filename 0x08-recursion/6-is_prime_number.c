#include "main.h"

/**
 * prime_n - calculate prime number
 * @a: input number
 * @b: input number
 * Return: 0
*/
int prime_n(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_n(a, b + 1));
}
/**
 * is_prime_number - function checks if n is a prime number or not
 * @n: input number
 * Return: 1, if n is prime, 0 otherwise
*/

int is_prime_number(int n)
{
	return (prime_n(n, 2));
}
