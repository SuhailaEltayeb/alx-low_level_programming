#include "search_algos.h"

/**
 * interpolation_search - search for value in sorted ints array by Interpolation search
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 *
 * Return:  first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t right, left, probe_position;
	
	left = 0;
	right = size - 1;
	if (array == NULL || size == 0)
		return (-1);
	while (left <= right && value >= array[left] && value <= array[right])
	{
	        probe_position = left + (((double)(right - left) /
			(array[right] - array[left])) * (value - array[left]));
		printf("Value checked array[%d] = [%d]\n", (int)probe_position, array[probe_position]);

		if (array[probe_position] == value)
			return (probe_position);
		if (array[probe_position] < value)
			left = probe_position + 1;
		else
			right = probe_position - 1;
	}
	printf("Value checked array[%d]", (int)left);
	if (left >= size || array[left] > value)
		printf(" is out of range\n");
	else
		printf(" = [%d]\n", array[left]);
	return (-1);
}

