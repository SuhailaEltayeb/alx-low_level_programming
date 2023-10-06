#include "main.h"
#include "stdlib.h"

/**
 * array_range - function that creates an array of integers.
 * @min: minimum value of intiger
 * @max: maximum value of intiger
 * Return: the pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int i, length;
	int *a;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	a = malloc(sizeof(int) * length);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}

