# is prime
# Write a function, is_prime, that takes in a number as an argument. 
# The function should return a boolean indicating whether or not 
# the given number is prime.

# A prime number is a number that is only divisible by two distinct numbers: 1 and itself.

# For example, 7 is a prime because it is only divisible by 1 and 7. For example, 
# 6 is not a prime because it is divisible by 1, 2, 3, and 6.

# You can assume that the input number is a positive integer.


def is_prime(num):
    if num < 2:
        return False
    for i in range(2,num):
        if num % i == 0:
            return False
    return True


print(is_prime(2)) #true
print(is_prime(3)) #true
print(is_prime(4)) #false
print(is_prime(5)) # true
print(is_prime(6)) # false
print(is_prime(7)) # true
print(is_prime(8)) # false
print(is_prime(25)) #false
print(is_prime(31)) # true
print(is_prime(2017)) #true 
print(is_prime(2048)) #false
print(is_prime(1)) # false
print(is_prime(713)) #false