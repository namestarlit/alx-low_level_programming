#!/usr/bin/python3
"""
Module that calculates the perimeter of an island in a grid.
"""


def count_water_neighbors(grid, row, col):
    """
    Returns the number of water neighbors a cell has in a grid.

    Args:
        grid (list): The grid representing the island.
        row (int): The row index of the cell.
        col (int): The column index of the cell.

    Returns:
        int: The number of water neighbors.
    """

    num_water_neighbors = 0

    if row <= 0 or not grid[row - 1][col]:
        num_water_neighbors += 1
    if col <= 0 or not grid[row][col - 1]:
        num_water_neighbors += 1
    if col >= len(grid[row]) - 1 or not grid[row][col + 1]:
        num_water_neighbors += 1
    if row >= len(grid) - 1 or not grid[row + 1][col]:
        num_water_neighbors += 1

    return num_water_neighbors


def island_perimeter(grid):
    """
    Calculates and returns the perimeter of the island in the grid.

    Args:
        grid (list): The grid representing the island.

    Returns:
        int: The perimeter of the island.
    """

    perimeter = 0

    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col]:
                perimeter += count_water_neighbors(grid, row, col)

    return perimeter
