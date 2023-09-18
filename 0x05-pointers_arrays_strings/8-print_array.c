#include "main.h"

/**
 * print_array -  function prints n elements of intigers array
 * followed by a new line.
 * @a: array name
 * @n: # of elements to be printed
 * Return: a and n input
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < (n - 1) ; i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
