#include "main.h"
#include "stdlib.h"

/**
 * alloc_grid - function that returns a pointer to
 *  a 2 dimensional array of integers
 *  @width: width of array
 *  @height:  height of array
 *  Return: pointer to array og intigers
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid_out;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid_out = malloc(height * sizeof(int *));
	if (grid_out == NULL)
	{
		free(grid_out);
		return (NULL);
	}
	for (i = 0 ; i < height ; i++)
	{
		grid_out[i] = malloc(width * sizeof(int));
		if (grid_out[i] == NULL)
		{
			for (i-- ; i >= 0 ; i--)
			free(grid_out[i]);
			free(grid_out);
			return (NULL);
		}
	}
	for (i = 0 ; i < height ; i++)
		for (j = 0 ; j < width ; j++)
			grid_out[i][j] = 0;
	return (grid_out);
}
