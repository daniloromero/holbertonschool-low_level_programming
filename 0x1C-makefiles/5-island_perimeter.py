#!/usr/bin/python3
"""Module to claculate the perimeter of the island described in grid"""


def island_perimeter(grid):
    """method to calculate the perimeter of grid"""
    perimeter = 2 
    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x] == 1:
                    perimeter += 2
    return perimeter
