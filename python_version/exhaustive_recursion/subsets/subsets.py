# subsets
# Write a function, subsets, that takes in a vector as an argument.
# The function should return a 2D vector where each subvector represents one of the possible subsets of the input vector.

# The elements within the subsets and the subsets themselves may be returned in any order.

# You may assume that the input vector contains unique elements.


def subsets(elements):

    return 


print(subsets(['a', 'b']))  # ->
# [
#   [],
#   [ 'b' ],
#   [ 'a' ],
#   [ 'a', 'b' ]
# ]
print(subsets(['a', 'b', 'c']))  # ->
# [
#   [],
#   [ 'c' ],
#   [ 'b' ],
#   [ 'b', 'c' ],
#   [ 'a' ],
#   [ 'a', 'c' ],
#   [ 'a', 'b' ],
#   [ 'a', 'b', 'c' ]
# ]
print(subsets(['x']))  # ->
# [
#   [],
#   [ 'x' ]
# ]
print(subsets([]))  # ->
# [
#   []
# ]
print(subsets(['q', 'r', 's', 't']))  # ->
# [
#   [],
#   [ 't' ],
#   [ 's' ],
#   [ 's', 't' ],
#   [ 'r' ],
#   [ 'r', 't' ],
#   [ 'r', 's' ],
#   [ 'r', 's', 't' ],
#   [ 'q' ],
#   [ 'q', 't' ],
#   [ 'q', 's' ],
#   [ 'q', 's', 't' ],
#   [ 'q', 'r' ],
#   [ 'q', 'r', 't' ],
#   [ 'q', 'r', 's' ],
#   [ 'q', 'r', 's', 't' ]
# ]
