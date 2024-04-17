# intersection
#     Write a function,
#     intersection, that takes in two vectors, a, b, as arguments.
#     The function should return a new vector containing elements that are in both of the two vectors.

#     You may assume that each input vector does not contain duplicate elements.

def intersection(a, b):
    a = hash_it(a)
    b = hash_it(b)
    result = []
    for ele in a:
        if ele in b:
            result.append(ele)
    return result


def hash_it(a):
    hsh = {}
    for i in a:
        if i in hsh:
            hsh[i] += 1
        else:
            hsh[i] = 1
    return hsh


#bad way O(n*m) time and O(min(n,m)) space
# def intersection(a, b):
#     result = []
#     for ele in b:
#         if ele in a:
#             result.append(ele)
#     return result

# using sets

# def intersection(a, b):
#     set_a  = set(a)
#     return [element for element in b if element in set_a]



print(intersection([4, 2, 1, 6], [3, 6, 9, 2, 10]))  # -> [2,6]
print(intersection([2, 4, 6], [4, 2]))  # -> [2,4]
print(intersection([4, 2, 1], [1, 2, 4, 6]))  # -> [1,2,4]
print(intersection([0, 1, 2], [10, 11]))  # -> []
a = [i for i in range(0, 50000)]
b = [i for i in range(0, 50000)]
print(intersection(a, b))  # -> [0,1,2,3,..., 49999]
