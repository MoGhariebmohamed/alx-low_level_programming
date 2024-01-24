#!/usr/bin/python3
"""that returns the perimeter of the island described in"""


def island_perimeter(grid):
    """returns the perimeter
    Args:
        grid: is a list of list of integers
    """
    length = len(grid[0])
    width = len(grid)
    total = 0
    corner = 0
    for x in range(width):
        for y in range(length):
            if grid[x][y] == 1:
                total += 1
                if (y > 0 and grid[x][y - 1] == 1):
                    corner += 1
                if (x > 0 and grid[x - 1][y] == 1):
                    corner += 1
    return total * 4 - corner * 2
