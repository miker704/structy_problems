# minimum island
# Write a function, minimumIsland, that takes in a grid containing Ws and Ls.
#  W represents water and L represents land. The function should return the size of the smallest
#  island. An island is a vertically or horizontally connected region of land.

# You may assume that the grid contains at least one island.

def minimum_island(grid):
    
    return 


def has_path(grid, row, col, visited):

    return 


grid = [
    ['W', 'L', 'W', 'W', 'W'],
    ['W', 'L', 'W', 'W', 'W'],
    ['W', 'W', 'W', 'L', 'W'],
    ['W', 'W', 'L', 'L', 'W'],
    ['L', 'W', 'W', 'L', 'L'],
    ['L', 'L', 'W', 'W', 'W'],
]

print(minimum_island(grid))  # -> 2
grid = [
    ['L', 'W', 'W', 'L', 'W'],
    ['L', 'W', 'W', 'L', 'L'],
    ['W', 'L', 'W', 'L', 'W'],
    ['W', 'W', 'W', 'W', 'W'],
    ['W', 'W', 'L', 'L', 'L'],
]

print(minimum_island(grid))  # -> 1
grid = [
    ['L', 'L', 'L'],
    ['L', 'L', 'L'],
    ['L', 'L', 'L'],
]

print(minimum_island(grid))  # -> 9
grid = [
    ['W', 'W'],
    ['L', 'L'],
    ['W', 'W'],
    ['W', 'L']
]

print(minimum_island(grid))  # -> 1
