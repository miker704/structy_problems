# paired parentheses
# Write a function, pairedParentheses, that takes in a string as an argument.
# The function should return a boolean indicating whether or not the string has well-formed parentheses.

# You may assume the string contains only alphabetic characters, '(', or ')'.


def paired_parentheses(string):


    return 


print(paired_parentheses("(david)((abby))"))  # -> True
print(paired_parentheses("()rose(jeff"))  # -> False
print(paired_parentheses(")("))  # -> False
print(paired_parentheses("()"))  # -> True
print(paired_parentheses("(((potato())))"))  # -> True
print(paired_parentheses("(())(water)()"))  # -> True
print(paired_parentheses("(())(water()()"))  # -> False
print(paired_parentheses(""))  # -> True
print(paired_parentheses("))()"))  # False
