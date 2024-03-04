# summing squares
# Write a function, summing_squares, that takes a target number as
# an argument. The function should return the minimum number of perfect squares
# that sum to the target. A perfect square is a number of the form (i*i) where i >= 1.

# For example: 1, 4, 9, 16 are perfect squares, but 8 is not perfect square.


# Given 12:

# summing_squares(12) -> 3

# The minimum squares required for 12 is three, by doing 4 + 4 + 4.

# Another way to make 12 is 9 + 1 + 1 + 1, but that requires four perfect squares.

# normal recursion brute force method time complexity is O(sqrt(n)^n) space O(n)
# def summing_squares(n):
#     if n == 0:
#         return 0
#     max_sq = float('inf')
#     for i in range(1, n+1):
#         sq = i*i
#         sub = 1+summing_squares(n - sq)
#         max_sq = min(sub, max_sq)
#     return max_sq

# optimized recursion with memoization method time complexity is O(sqrt(n)*n) space O(n)
import math


def summing_squares(n):
    return 


def _summing_squares(n, hsh):

    return 


print(summing_squares(8))  # -> 2
print(summing_squares(9))  # -> 1
print(summing_squares(12))  # -> 3
print(summing_squares(1))  # -> 1
print(summing_squares(31))  # -> 4
print(summing_squares(50))  # -> 2
print(summing_squares(68))  # -> 2
print(summing_squares(87))  # -> 4
