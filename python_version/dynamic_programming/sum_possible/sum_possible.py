# sum possible
# Write a function sum_possible that takes in an amount
#  and a list of positive numbers. The function should return a boolean 
#  indicating whether or not it is possible to create the amount by summing
#   numbers of the list. You may reuse numbers of the list as many times as necessary.

# You may assume that the target amount is non-negative.

#brute force running at O(n^2) exponential time 
#more specifically O(n^a) where n is the array length and a is the amount 
# branch ^ depth upon reaching a certain amount of 'a' as input the depth of 
# calls on the stack become extremely massive in addition to the length of the input array itself
#  causes the calculation to take minutes 
# at a time to complete reaching slower than calulating fibonacci of 46 using brute force method
# combinations for an array of 2 elements for an amount of 100 can generate nonillion combinations 

# def sum_possible(amount,array):
#     if amount == 0:
#         return True
#     if amount < 0 :
#         return False
    
#     for num in array:
#         if sum_possible(amount-num,array):
#             return True
    
#     return False

# optimized version cuts of majority of the exponential growth of calls
# O(a*n) where 'a' represents the amount to reach and 'n' is the length
# meaning the 'a' is the depth and 'n' is the branches 
# but this time each level can only have a*n # of nodes max

def sum_possible(amount,array):
    return


def _sum_possible(amount,array,haSh={}):

    
    return





print(sum_possible(8, [5, 12, 4])) #true
print(sum_possible(15, [6, 2, 10, 19])) #false
print(sum_possible(13, [6, 2, 1])) #true
print(sum_possible(103, [6, 20, 1])) #true
print(sum_possible(12, [])) #false
print(sum_possible(12, [12]))    #true
print(sum_possible(0, []))   #true
print(sum_possible(271, [10, 8, 265, 24])) #false
print(sum_possible(2017, [4, 2, 10])) #false
print(sum_possible(13, [3, 5])) #true