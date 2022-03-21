#!/usr/bin/python3
# File: 5-island_perimeter.py
# Author: Alex Orland Arévalo Tribaldos
# email: <3915@holbertonschool.com>

!/usr/bin/python3
"""This Module Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island.
    The grid represents water by 0 and land by 1.
    Args:
    grid (list): A list of list of integers representing an island.
    Returns: The perimeter of the island defined in grid.
    """
    rows = len(grid)
    perimeter = 0
    for i in range(rows):
        cols = len(grid[i])
        for j in range(cols):
            if (grid[i][j] == 1):
                left = 1 if j == 0 or grid[i][j - 1] == 0 else 0
                top = 1 if i == 0 or grid[i - 1][j] == 0 else 0
                right = 1 if j == cols - 1 or grid[i][j + 1] == 0 else 0
                bottom = 1 if i == rows - 1 or grid[i + 1][j] == 0 else 0
                perimeter += (top + right + bottom + left)
    return perimeter
