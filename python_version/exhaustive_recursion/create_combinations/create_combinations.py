# create combinations
# Write a function, createCombinations, that takes in an vector and a size as arguments.
#  The function should return a 2D vector representing all of the combinations of the specifized size.

# The items within the combinations and the combinations themselves may be returned in any order.

# You may assume that the input vector contains unique elements and 1 <= k <= items.size()


def create_combinations(items, k):

    return 


print(create_combinations(["a", "b", "c"], 2))  # ->
# [
#   [ 'a', 'b' ],
#   [ 'a', 'c' ],
#   [ 'b', 'c' ]
# ]
print(create_combinations(["q", "r", "s", "t"], 2))  # ->
# [
#   [ 'q', 'r' ],
#   [ 'q', 's' ],
#   [ 'q', 't' ],
#   [ 'r', 's' ],
#   [ 'r', 't' ],
#   [ 's', 't' ]
# ]
print(create_combinations(['q', 'r', 's', 't'], 3))  # ->
# [
#   [ 'q', 'r', 's' ],
#   [ 'q', 'r', 't' ],
#   [ 'q', 's', 't' ],
#   [ 'r', 's', 't' ]
# ]
print(create_combinations([1, 28, 94], 3))  # ->
# [
#   [ 1, 28, 94 ]
# ]
