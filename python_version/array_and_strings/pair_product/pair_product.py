# pair product
# Write a function, pairProduct, that takes in an array and a target product as arguments.
#  The function should return an array containing a pair of indices whose elements multiply
#  to the given target. The indices returned must be unique.

# Be sure to return the indices, not the elements themselves.

# There is guaranteed to be one such pair whose product is the target.

# def pair_product(numbers, target_product):
#     hsh = {}
#     for i in range(0, len(numbers)):
#         divisor = int(target_product/numbers[i])
#         if divisor in hsh:
#             return (hsh[divisor], i)
#         hsh[numbers[i]] = i
# using enumerate
def pair_product(numbers, target_product):
    hsh = {}
    for index, num in enumerate(numbers):
        divisor = int(target_product/num)
        if divisor in hsh:
            return (hsh[divisor], index)
        hsh[num] = index


print(pair_product([3, 2, 5, 4, 1], 8))  # -> (1, 3)
print(pair_product([3, 2, 5, 4, 1], 10))  # -> (1, 2)
print(pair_product([4, 7, 9, 2, 5, 1], 5))  # -> (4, 5)
print(pair_product([4, 7, 9, 2, 5, 1], 35))  # -> (1, 4)
print(pair_product([3, 2, 5, 4, 1], 10))  # -> (1, 2)
print(pair_product([4, 6, 8, 2], 16))  # -> (2, 3)
