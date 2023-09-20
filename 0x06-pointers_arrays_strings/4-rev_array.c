#include "main.h"

/**
 * reverse_array - function reverses content of array of integers
 * @a: array of intigers
 * @n: array elements #
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i;
	int x;

	for (i = 0; i < n--; i++)
	{
		x = a[i];
		a[i] = a[n];
		a[n] = x;
	}
}

