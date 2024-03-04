# nesting score
# Write a function, nestingScore, that takes in a string of brackets as
# an argument. The function should return the score of the string according
# to the following rules:

# [] is worth 1 point
# XY is worth m + n points where X, Y are substrings of well-formed brackets and
# m, n are their respective scores
# [S] is worth 2 * k points where S is a substring of well-formed brackets and k
#  is the score of that substring
# You may assume that the input only contains well-formed square brackets.

def nesting_score(string):


    return 


print(nesting_score("[]"))  # -> 1
print(nesting_score("[][][]"))  # -> 3
print(nesting_score("[[]]"))  # -> 2
print(nesting_score("[[][]]"))  # -> 4
print(nesting_score("[[][][]]"))  # -> 6
print(nesting_score("[[][]][]"))  # -> 5
print(nesting_score("[][[][]][[]]"))  # -> 7
print(nesting_score("[[[[[[[][]]]]]]][]"))  # -> 129
