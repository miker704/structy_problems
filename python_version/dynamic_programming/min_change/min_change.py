
# min change
# Write a function min_change that takes in an amount and a vector of coins. 
# The function should return the minimum number of coins required to create 
# the amount. You may use each coin as many times as necessary.
# If it is not possible to create the amount, then return -1.




#method using recursion without memoization runs at around 0(coins_array_length ^amount) exponential runtime
#however even though we have logic for cutting down the number of branches by ignoring functions calls for numbers greater
#than the current amount we still suffer from the problem 'overlapping subproblems property' and it occurs enough to keep
#our performance capped at exponential even with our condition to avoid computing amount - coin where coin is > amount

import sys
import math

# def min_change(amount,coins):

#     if amount == 0:
#         return 0
    
#     min_coins = sys.maxsize
#     for coin in coins:
#         if coin <= amount:
#             sub = min_change(amount-coin,coins)
#             if sub != -1 and sub != sys.maxsize and sub < min_coins:
#                 min_coins = sub +1

#     if min_coins == sys.maxsize:
#         return -1
#     else:
#         return min_coins





# optimized recursive method using memoizartion with a hash table 
# it is nearly identically to the original method except a hash table
#is used to eliminate the overlapping subproblems property from occuring
# making the algorithim run around O(coins.length * amount)
#space complexity is O(amount)

# def min_change(amount,coins,haSh={}):

#     if amount == 0:
#         return 0
#     if amount < 0:
#         return -1
#     if amount in haSh:
#         return haSh[amount]

#     min_coins = sys.maxsize
#     for coin in coins:
#         if coin <= amount:
#             sub = min_change(amount-coin,coins,haSh)
#             if sub != -1 and sub != sys.maxsize and sub+1 < min_coins:
#                 min_coins = sub +1
#                 haSh[amount]=min_coins
#     if min_coins == sys.maxsize:
#         haSh[amount]=-1
#         return -1
#     else:
#         return min_coins



# optimized method using memoization and built in functions 
# making the algorithim run around O(coins.length * amount) space complexity is O(amount)
def min_change(amount,coins,haSh={}):
    

        return

def _min_change(amount,coins,haSh={}):

    
    return 



print(min_change(4, [1, 2, 3],{})); # -> 2, because 4+4 is the minimum coins possible
print(min_change(8, [1, 5, 4, 12],{})); # -> 2, because 4+4 is the minimum coins possible
print(min_change(13, [1, 9, 5, 14, 30],{})); # -> 5
print(min_change(23, [2, 5, 7],{})); # -> 4
print(min_change(102, [1, 5, 10, 25],{})); # -> 6
print(min_change(200, [1, 5, 10, 25],{})); # -> 8
print(min_change(2017, [4, 2, 10],{})); # -> -1
print(min_change(271, [10, 8, 265, 24],{})); # -> -1
print(min_change(0, [4, 2, 10],{}));  # -> 0
print(min_change(0, [],{})); # -> 0