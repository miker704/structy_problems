# intersection
#     Write a function,
#     intersection, that takes in two vectors, a, b, as arguments.
#     The function should return a new vector containing elements that are in both of the two vectors.

#     You may assume that each input vector does not contain duplicate elements.

def intersection(a, b):
    return



def hash_it(a):
    return


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
