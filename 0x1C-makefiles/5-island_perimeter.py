#!/usr/bin/python3
'''
returns the perimeter of the island described in grid.
'''


def island_perimeter(grid):
    '''Function to return perimiter of island.

    Grid is a list of list of integers:
    0 represents a water zone
    1 represents a land zone

    Args:
        grid (list):integers list representing an island.
    Returns:
        The perimeter of the island defined in grid.
    '''
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
