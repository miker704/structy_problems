# count paths
# Write a function, countPaths, that takes in a grid as an argument.
# In the grid, 'X' represents walls and 'O' represents open spaces.
# You may only move down or to the right and cannot pass through walls.
# The function should return the number
# of ways possible to travel from the top-left corner of the grid to the bottom-right corner.
# example
# std::vector<std::vector<char>> grid {
#     {'O', 'O'},
#     {'O', 'O'}
#   };
#   countPaths(grid); # -> 2 ([0][0] -> right [0][1] -> down [1][1])
# && ([0][0]->down[1][0] -> right [1],[1])


# unoptimized method running exponential time of O(n^(r+c)) with space  of O(r+c)
# takes on average 32 seconds to complete for a data set of a multi array of 15 x 15 length

# def count_paths(grid, row=0, col=0):
#     if row == len(grid) or col == len(grid[0]) or grid[row][col] == "X":
#         return 0
#     if row == len(grid)-1 and col == len(grid[0])-1:
#         return 1

#     return count_paths(grid, row+1, col)+count_paths(grid, row, col+1)


# optimized method running exponential time of O((r*c)) with space of O(r*c)
def count_paths(grid):
    
    return 

def _count_paths(grid, row=0, col=0, hsh={}):
    
    return 


grid = [
    ["O", "O"],
    ["O", "O"],
]
print(count_paths(grid))  # -> 2

grid = [
    ["O", "O", "X"],
    ["O", "O", "O"],
    ["O", "O", "O"],
]
print(count_paths(grid))  # -> 5

grid = [
    ["O", "O", "O"],
    ["O", "O", "X"],
    ["O", "O", "O"],
]
print(count_paths(grid))  # -> 3
grid = [
    ["O", "O", "O"],
    ["O", "X", "X"],
    ["O", "O", "O"],
]
print(count_paths(grid))  # -> 1


grid = [
    ["O", "O", "X", "O", "O", "O"],
    ["O", "O", "X", "O", "O", "O"],
    ["X", "O", "X", "O", "O", "O"],
    ["X", "X", "X", "O", "O", "O"],
    ["O", "O", "O", "O", "O", "O"],
]
print(count_paths(grid))  # -> 0


grid = [
    ["O", "O", "X", "O", "O", "O"],
    ["O", "O", "O", "O", "O", "X"],
    ["X", "O", "O", "O", "O", "O"],
    ["X", "X", "X", "O", "O", "O"],
    ["O", "O", "O", "O", "O", "O"],
]
print(count_paths(grid))  # -> 42

grid = [
    ["O", "O", "X", "O", "O", "O"],
    ["O", "O", "O", "O", "O", "X"],
    ["X", "O", "O", "O", "O", "O"],
    ["X", "X", "X", "O", "O", "O"],
    ["O", "O", "O", "O", "O", "X"],
]
print(count_paths(grid))  # -> 0

grid = [
    ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
    ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
    ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
    ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
    ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
    ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
    ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
    ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
    ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
    ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
    ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
    ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
    ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
    ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
    ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
]
print(count_paths(grid))  # -> 40116600


grid = [
    ["O", "O", "X", "X", "O", "O", "O", "X", "O", "O", "O", "O", "O", "O", "O"],
    ["O", "O", "X", "X", "O", "O", "O", "X", "O", "O", "O", "O", "O", "O", "O"],
    ["O", "O", "O", "X", "O", "O", "O", "X", "O", "O", "O", "O", "O", "O", "O"],
    ["X", "O", "O", "O", "O", "O", "O", "X", "O", "O", "O", "O", "O", "O", "O"],
    ["X", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
    ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "X", "X", "O"],
    ["O", "O", "O", "O", "O", "O", "O", "X", "O", "O", "O", "O", "O", "X", "O"],
    ["O", "O", "O", "O", "O", "O", "O", "O", "X", "O", "O", "O", "O", "O", "O"],
    ["X", "X", "X", "O", "O", "O", "O", "O", "O", "X", "O", "O", "O", "O", "O"],
    ["O", "O", "O", "O", "X", "X", "O", "O", "O", "O", "X", "O", "O", "O", "O"],
    ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
    ["O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
    ["O", "O", "O", "O", "X", "X", "O", "O", "O", "O", "O", "O", "O", "O", "O"],
    ["O", "O", "O", "O", "O", "O", "O", "O", "X", "O", "O", "O", "O", "O", "O"],
    ["O", "O", "O", "O", "O", "O", "O", "O", "X", "O", "O", "O", "O", "O", "O"],
]
print(count_paths(grid))  # -> 3190434
