#!/usr/bin/python3
"""island_perimeter(grid) module"""


def island_perimeter(grid):
    """
    Calculater the Island's perimeter

    args:
        grid (array): An 0's and 1's array that represents an island (1)
        sourrounded by water (0)

    Returns:
        The island's perimeter
    """
    perimeter = 0
    for y, row in enumerate(grid):
        for x, cell in enumerate(row):
            if cell == 1:
                if y == 0 or grid[y - 1][x] == 0:
                    perimeter += 1
                if y == len(grid) - 1 or grid[y + 1][x] == 0:
                    perimeter += 1
                if x == 0 or grid[y][x - 1] == 0:
                    perimeter += 1
                if x == len(row) - 1 or grid[y][x + 1] == 0:
                    perimeter += 1
    return perimeter