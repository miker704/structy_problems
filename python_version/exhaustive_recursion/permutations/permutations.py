# permutations
# Write a function, permutations, that takes in a list an argument. The function should
# return a 2D list where each sublist represents one of the possible permutations of the list.

# The sublists may be returned in any order.

# You may assume that the input list contains unique items.


def permutations(items):

    return 


print(permutations(['a', 'b', 'c']))  # ->
# [
#   [ 'a', 'b', 'c' ],
#   [ 'b', 'a', 'c' ],
#   [ 'b', 'c', 'a' ],
#   [ 'a', 'c', 'b' ],
#   [ 'c', 'a', 'b' ],
#   [ 'c', 'b', 'a' ]
# ]
print(permutations(['red', 'blue']))  # ->
# [
#   [ 'red', 'blue' ],
#   [ 'blue', 'red' ]
# ]
print(permutations([8, 2, 1, 4]))  # ->
# [
#   [ 8, 2, 1, 4 ], [ 2, 8, 1, 4 ],
#   [ 2, 1, 8, 4 ], [ 2, 1, 4, 8 ],
#   [ 8, 1, 2, 4 ], [ 1, 8, 2, 4 ],
#   [ 1, 2, 8, 4 ], [ 1, 2, 4, 8 ],
#   [ 8, 1, 4, 2 ], [ 1, 8, 4, 2 ],
#   [ 1, 4, 8, 2 ], [ 1, 4, 2, 8 ],
#   [ 8, 2, 4, 1 ], [ 2, 8, 4, 1 ],
#   [ 2, 4, 8, 1 ], [ 2, 4, 1, 8 ],
#   [ 8, 4, 2, 1 ], [ 4, 8, 2, 1 ],
#   [ 4, 2, 8, 1 ], [ 4, 2, 1, 8 ],
#   [ 8, 4, 1, 2 ], [ 4, 8, 1, 2 ],
#   [ 4, 1, 8, 2 ], [ 4, 1, 2, 8 ]
# ]
print(permutations([]))  # ->
# [
#  [ ]
# ]
