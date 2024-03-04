# pair sum
# Write a function, pairSum, that takes in a vector of numbers and a target sum as arguments.
# The function should return a std::array containing a pair of indices whose elements
# sum to the given target. The indices returned must be unique.

# Be sure to return the indices, not the elements themselves.

# There is guaranteed to be one such pair that sums to the target.

def pair_sum(numbers, target_sum):
    return

print(pair_sum([3, 2, 5, 4, 1], 8))  # -> (0, 2)
print(pair_sum([4, 7, 9, 2, 5, 1], 5))  # -> (0, 5)
print(pair_sum([4, 7, 9, 2, 5, 1], 3))  # -> (3, 5)
print(pair_sum([1, 6, 7, 2], 13))  # -> (1, 2)
print(pair_sum([9, 9], 18))  # -> (0, 1)
print(pair_sum([6, 4, 2, 8], 12))  # -> (1, 3)
