# decompress braces
# Write a function, decompressBraces, that takes in a compressed string as an argument.
#  The function should return the string decompressed.

# The compression format of the input string is 'n{subString}', where the subString within
# braces should be repeated n times.

# You may assume that every number n is guaranteed to be an integer between 1 through 9.

# You may assume that the input is valid and the decompressed string
#  will only contain alphabetic characters.

from collections import deque


def decompress_braces(string):

    return 


print(decompress_braces("2{q}3{tu}v"))
# -> qqtututuv
print(decompress_braces("ch3{ao}"))
# -> chaoaoao
print(decompress_braces("2{y3{o}}s"))
# -> yoooyooos
print(decompress_braces("z3{a2{xy}b}"))
# -> zaxyxybaxyxybaxyxyb
print(decompress_braces("2{3{r4{e}r}io}"))
# -> reeeerreeeerreeeerioreeeerreeeerreeeerio
print(decompress_braces("go3{spinn2{ing}s}"))
# -> gospinningingsspinningingsspinningings
print(decompress_braces("2{l2{if}azu}l"))
# -> lififazulififazul
print(decompress_braces("3{al4{ec}2{icia}}"))
# -> alececececiciaiciaalececececiciaiciaalececececiciaicia
