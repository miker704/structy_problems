# island count
# Write a function, island_count, that takes in a grid containing Ws and Ls. W represents water and L represents land.
# The function should return the number of islands on the grid. An island is a vertically or
# horizontally connected region of land.

def island_count(grid):

    return


def has_path(grid, row, col, visited):


    return True


grid = [
    ['W', 'L', 'W', 'W', 'W'],
    ['W', 'L', 'W', 'W', 'W'],
    ['W', 'W', 'W', 'L', 'W'],
    ['W', 'W', 'L', 'L', 'W'],
    ['L', 'W', 'W', 'L', 'L'],
    ['L', 'L', 'W', 'W', 'W'],
]

print(island_count(grid))  # -> 3
grid = [
    ['L', 'W', 'W', 'L', 'W'],
    ['L', 'W', 'W', 'L', 'L'],
    ['W', 'L', 'W', 'L', 'W'],
    ['W', 'W', 'W', 'W', 'W'],
    ['W', 'W', 'L', 'L', 'L'],
]

print(island_count(grid))  # -> 4
grid = [
    ['L', 'L', 'L'],
    ['L', 'L', 'L'],
    ['L', 'L', 'L'],
]

print(island_count(grid))  # -> 1
grid = [
    ['W', 'W'],
    ['W', 'W'],
    ['W', 'W'],
]

print(island_count(grid))  # -> 0
