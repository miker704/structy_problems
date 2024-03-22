# anagrams
# Write a function, anagrams, that takes in two strings as arguments. The function should return
#  a boolean indicating whether or not the strings are anagrams. Anagrams are strings that
# contain the same characters, but in any order.

def anagrams(s1, s2):
   return hsh_it(s1) == hsh_it(s2)
 


def hsh_it(s):
    hsh = {}
    for char in s:
        if char in hsh:
            hsh[char]+=1
        else:
            hsh[char]=1
    return hsh


print(anagrams('restful', 'fluster'))  # -> True
print(anagrams('cats', 'tocs'))  # -> False
print(anagrams('monkeyswrite', 'newyorktimes'))  # -> True
print(anagrams('paper', 'reapa'))  # -> False
print(anagrams('elbow', 'below'))  # -> True
print(anagrams('tax', 'taxi'))  # -> False
print(anagrams('taxi', 'tax'))  # -> False
print(anagrams('night', 'thing'))  # -> True
print(anagrams('abbc', 'aabc'))  # -> False
print(anagrams('po', 'popp'))  # -> false
print(anagrams('pp', 'oo'))  # -> false
