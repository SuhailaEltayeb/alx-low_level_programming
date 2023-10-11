#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array of itigers
 * @size:number of elements in the array array
 * @cmp:  pointer to the function to be used to compare values
 * Return: index of the first element
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
