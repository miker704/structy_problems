# most frequent char
# Write a function, mostFrequentChar, that takes in a string as an argument.
# The function should return the most frequent character of the string.
# If there are ties, return the character that appears earlier in the string.

# You can assume that the input string is non-empty.

def most_frequent_char(s):
    hsh = {}
    for i in s:
        if i in hsh:
            hsh[i] += 1
        else:
            hsh[i] = 1
    maxVal = None
    for char in hsh:
        if maxVal == None or hsh[char] > hsh[maxVal]:
            maxVal = char
    return maxVal


print(most_frequent_char('bookeeper'))  # -> 'e'
print(most_frequent_char('david'))  # -> 'd'
print(most_frequent_char('abby'))  # -> 'b'
print(most_frequent_char('mississippi'))  # -> 'i'
print(most_frequent_char('potato'))  # -> 'o'
print(most_frequent_char('eleventennine'))  # -> 'e'
print(most_frequent_char('riverbed'))  # -> 'r'
