
# fib
# Write a function fib that takes in a number argument, n, and
# returns the n-th number of the Fibonacci sequence.
# The 0-th number of the sequence is 0.
# The 1-st number of the sequence is 1.
# To generate further numbers of the sequence, calculate
# the sum of previous two numbers.
# Solve this recursively.

# brute force method 0(n^2) exponential time via branch ^ depth (number of return branches ^ n)_

# def fib(n):
#     if n == 0:
#         return 0
#     if n == 1:
#         return 1
#     return fib(n-2)+fib(n-1)

#optimized method using memoization

def fib(n, haSh={}):

    return 


print(fib(0))  # 0
print(fib(1))  # 1
print(fib(2))  # 1
print(fib(3))  # 2
print(fib(4))  # 3
print(fib(5))  # 5
print(fib(35))  # 9227465
print(fib(46))  # 1836311903