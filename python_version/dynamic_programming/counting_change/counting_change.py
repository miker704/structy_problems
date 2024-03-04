# counting change
# Write a function, counting_change, that takes in an amount and a list of coins. The function should
# return the number of different ways it is possible to make change for the given amount using the coins.

# You may reuse a coin as many times as necessary.

# For example,

# counting_change(4, [1,2,3]) -> 4

# There are four different ways to make an amount of 4:

# 1. 1 + 1 + 1 + 1
# 2. 1 + 1 + 2
# 3. 1 + 3
# 4. 2 + 2

# normal recusion time complexity is O(2^n) exponential where branch^depth
# where branch is the number of elements in the coins array and depth is the amount to achieve
# O(coinslength ^amountofChange)
# space complexity is O(coinslength *amountofChange) where n is the amountOfChange #`s deep in the stack tree

# optimized method using recusion and memoization will
# be time complexity of O(amount*coins.length)
# and space complexity is O(coinslength *amountofChange)


def counting_change(amount, coins):
    return 


def _counting_change(amount, coins, idx, hsh):
   

    return 



print(counting_change(4, [1, 2, 3]))  # -> 4
print(counting_change(8, [1, 2, 3]))  # -> 10
print(counting_change(24, [5, 7, 3]))  # -> 5
print(counting_change(13, [2, 6, 12, 10]))  # -> 0
print(counting_change(512, [1, 5, 10, 25]))  # -> 20119
print(counting_change(1000, [1, 5, 10, 25]))  # -> 142511
print(counting_change(240, [1, 2, 3, 4, 5, 6, 7, 8, 9]))  # -> 1525987916
