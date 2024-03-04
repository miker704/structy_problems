# non adjacent sum
# Write a function, nonAdjacentSum, that takes in an array of numbers as
# an argument. The function should return the maximum sum of non-adjacent
# elements in the array. There is no limit on how many elements can be taken
# into the sum as long as they are not adjacent.

# For example, given:

# [2, 4, 5, 12, 7]

# The maximum non-adjacent sum is 16, because 4 + 12.
# 4 and 12 are not adjacent in the array.

# using an array as a memoization

# def non_adjacent_sum(nums):
#     if len(nums) == 0:
#         return 0
#     if len(nums) == 1:
#         return nums[0]
#     array = [0] * (len(nums))
#     array[0] = nums[0]
#     array[1] = max(nums[0],nums[1])
#     for i in range(2,len(nums)):
#         array[i] = max(array[i-1],array[i-2]+nums[i])
#     return max(array)


# using a hash and recursion memoizations
def non_adjacent_sum(nums):
    return 


def _non_adjacent_sum(nums, idx, hsh):

    return 


nums = [2, 4, 5, 12, 7]
print(non_adjacent_sum(nums))  # -> 16

nums = [7, 5, 5, 12]
print(non_adjacent_sum(nums))  # -> 19

nums = [7, 5, 5, 12, 17, 29]
print(non_adjacent_sum(nums))  # -> 48

nums = [
    72, 62, 10,  6, 20, 19, 42,
    46, 24, 78, 30, 41, 75, 38,
    23, 28, 66, 55, 12, 17, 9,
    12, 3, 1, 19, 30, 50, 20
]
print(non_adjacent_sum(nums))  # -> 488

nums = [
    72, 62, 10,  6, 20, 19, 42, 46, 24, 78,
    30, 41, 75, 38, 23, 28, 66, 55, 12, 17,
    83, 80, 56, 68,  6, 22, 56, 96, 77, 98,
    61, 20,  0, 76, 53, 74,  8, 22, 92, 37,
    30, 41, 75, 38, 23, 28, 66, 55, 12, 17,
    72, 62, 10,  6, 20, 19, 42, 46, 24, 78,
    42
]
print(non_adjacent_sum(nums))  # -> 1465
