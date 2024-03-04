# befitting brackets
# Write a function, befittingBrackets, that takes in a string as an argument.
# The function should return a boolean indicating whether or not the string
# contains correctly matched brackets.

# You may assume the string contains only characters: ( ) [ ] { }

from collections import deque


def befitting_brackets(string):
    return


print(befitting_brackets('(){}[](())'))  # -> True
print(befitting_brackets('({[]})'))  # -> True
print(befitting_brackets('[][}'))  # -> False
print(befitting_brackets('{[]}({}'))  # -> False
print(befitting_brackets('[]{}(}[]'))  # -> False
print(befitting_brackets('[]{}()[]'))  # -> True
print(befitting_brackets(']{}'))  # -> False
print(befitting_brackets(''))  # -> True
print(befitting_brackets("{[(}])"))  # -> False
