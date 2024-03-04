# best bridge
# Write a function, bestBridge, that takes in a grid as an argument.
# The grid contains water (W) and land (L).
# There are exactly two islands in the grid. An island is a vertically or
# horizontally connected region of land.
#  Return the minimum length bridge needed to connect the two islands.
#  A bridge does not need to form a straight line.

from collections import deque


def best_bridge(grid):

    return

def is_map_bounds(grid, row, col):
    
    return 


def get_island(grid, row, col, island):

    return island


grid = [
    ["W", "W", "W", "L", "L"],
    ["L", "L", "W", "W", "L"],
    ["L", "L", "L", "W", "L"],
    ["W", "L", "W", "W", "W"],
    ["W", "W", "W", "W", "W"],
    ["W", "W", "W", "W", "W"],
]
print(best_bridge(grid))  # -> 1
grid = [
    ["W", "W", "W", "W", "W"],
    ["W", "W", "W", "W", "W"],
    ["L", "L", "W", "W", "L"],
    ["W", "L", "W", "W", "L"],
    ["W", "W", "W", "L", "L"],
    ["W", "W", "W", "W", "W"],
]
print(best_bridge(grid))  # -> 2
grid = [
    ["W", "W", "W", "W", "W"],
    ["W", "W", "W", "L", "W"],
    ["L", "W", "W", "W", "W"],
]
print(best_bridge(grid))  # -> 3
grid = [
    ["W", "W", "W", "W", "W", "W", "W", "W"],
    ["W", "W", "W", "W", "W", "W", "W", "W"],
    ["W", "W", "W", "W", "W", "W", "W", "W"],
    ["W", "W", "W", "W", "W", "L", "W", "W"],
    ["W", "W", "W", "W", "L", "L", "W", "W"],
    ["W", "W", "W", "W", "L", "L", "L", "W"],
    ["W", "W", "W", "W", "W", "L", "L", "L"],
    ["L", "W", "W", "W", "W", "L", "L", "L"],
    ["L", "L", "L", "W", "W", "W", "W", "W"],
    ["W", "W", "W", "W", "W", "W", "W", "W"],
]
print(best_bridge(grid))  # -> 3
grid = [
    ["L", "L", "L", "L", "L", "L", "L", "L"],
    ["L", "W", "W", "W", "W", "W", "W", "L"],
    ["L", "W", "W", "W", "W", "W", "W", "L"],
    ["L", "W", "W", "W", "W", "W", "W", "L"],
    ["L", "W", "W", "W", "W", "W", "W", "L"],
    ["L", "W", "W", "W", "W", "W", "W", "L"],
    ["L", "W", "W", "L", "W", "W", "W", "L"],
    ["L", "W", "W", "W", "W", "W", "W", "L"],
    ["L", "W", "W", "W", "W", "W", "W", "L"],
    ["L", "W", "W", "W", "W", "W", "W", "L"],
    ["L", "W", "W", "W", "W", "W", "W", "L"],
    ["L", "L", "L", "L", "L", "L", "L", "L"],
]
print(best_bridge(grid))  # -> 2
grid = [
    ["W", "L", "W", "W", "W", "W", "W", "W"],
    ["W", "L", "W", "W", "W", "W", "W", "W"],
    ["W", "W", "W", "W", "W", "W", "W", "W"],
    ["W", "W", "W", "W", "W", "W", "W", "W"],
    ["W", "W", "W", "W", "W", "W", "W", "W"],
    ["W", "W", "W", "W", "W", "W", "L", "W"],
    ["W", "W", "W", "W", "W", "W", "L", "L"],
    ["W", "W", "W", "W", "W", "W", "W", "L"],
]
print(best_bridge(grid))  # -> 8
