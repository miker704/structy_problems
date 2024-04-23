#  Max Value
#  Write a function, maxValue, that takes in array of numbers as an argument. 
#  The function should return the largest number in the array.

#  Solve this without using any built-in array methods.

#  You can assume that the array is non-empty.


def max_value(array):
    max_val = array[0]
    for i in range(len(array)):
        if(array[i] > max_val):
            max_val = array[i]
    return max_val



print(max_value([10, 5, 40, 40.3])) # 40.3
print(max_value([-5, -2, -1, -11])) # -1
print(max_value([42])) # 42
print(max_value([1000,8])) # 1000
print(max_value([1000, 8, 9000])) # 9000
print(max_value([2, 5, 1, 1, 4])) # 5
