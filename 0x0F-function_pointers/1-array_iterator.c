#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a
 * parameter on each element of an array.
 * @array: array of intigers
 * @size: array of intgers size
 * @action:  pointer to the function you need to use
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *array_end = array + size - 1;

	if (array && size && action)
		while (array <= array_end)
			action(*array++);
}
