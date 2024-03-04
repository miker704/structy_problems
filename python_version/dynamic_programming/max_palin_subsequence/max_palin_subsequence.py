# max palin subsequence
# Write a function, max_palin_subsequence, that takes in a string as an argument.
#  The function should return the length of the longest subsequence of the string
#  that is also a palindrome.

# A subsequence of a string can be created by deleting any characters of the string,
# while maintaining the relative order of characters.

import math


# def max_palin_subsequence(str):
#     return _max_palin_subsequence(str, 0, {})


# def _max_palin_subsequence(str, maxVal, hsh):

#     if str in hsh:
#         return hsh[str]
#     if len(str) == 0:
#         return 0
#     if len(str) == 1:
#         return 1
#     if str[0] == str[len(str)-1]:
#         return 2+_max_palin_subsequence(str[1:-1], maxVal, hsh)
#     left = _max_palin_subsequence(str[1:], maxVal, hsh)
#     right = _max_palin_subsequence(str[0:-1], maxVal, hsh)
#     maxVal += max(left, right)
#     hsh[str] = maxVal
#     return maxVal

# alternative method
def max_palin_subsequence(str):
    return


def _max_palin_subsequence(str, i, j, hsh):

    
    return 

print(max_palin_subsequence("luwxult"))  # -> 5
print(max_palin_subsequence("xyzaxxzy"))  # -> 6
print(max_palin_subsequence("lol"))  # -> 3
print(max_palin_subsequence("boabcdefop"))  # -> 3
print(max_palin_subsequence("z"))  # -> 1
print(max_palin_subsequence("chartreusepugvicefree"))  # -> 7
print(max_palin_subsequence("qwueoiuahsdjnweuueueunasdnmnqweuzqwerty"))  # -> 15
print(max_palin_subsequence(
    "enamelpinportlandtildecoldpressedironyflannelsemioticsedisonbulbfashionaxe"))  # -> 31
