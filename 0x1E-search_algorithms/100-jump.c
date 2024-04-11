#include "search_algos.h"
#include <math.h>
/**
 * jump_search -  search for value in sorted array of ints by Jump search
 * @array:  pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value:  value to search for
 *
 * Return: first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	int i, jump, left, right;
	
	right = 0;
	left = 0;
	jump = (int)sqrt((double)size);
	if (array == NULL || size == 0)
		return (-1);
	while (right < (int)size && array[right] < value)
	{
		printf("Value checked array[%d] = [%d]\n", right, array[right]);
		left = right;
		right += jump;
	}
	printf("Value found between indexes [%d] and [%d]\n", left, right);
	for (i = left; i <= right && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
