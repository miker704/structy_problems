# lexical order
# Write a function, lexicalOrder, that takes in 2 words and an alphabet
#  string as an argument. The function should return true if the first word
#   should appear before the second word if lexically-ordered according to
#   the given alphabet order. If the second word should appear first, then return false.
# https://en.wikipedia.org/wiki/Lexicographic_order
# Note that the alphabet string may be any arbitrary string.

# Intuitively, Lexical Order is like "dictionary" order:

# You can assume that all characters are lowercase a-z.

# You can assume that the alphabet contains all 26 letters.

def lexical_order(word_1, word_2, alphabet):

    return True


alphabet = "abcdefghijklmnopqrstuvwxyz"
print(lexical_order("apple", "dock", alphabet))  # -> True
alphabet = "abcdefghijklmnopqrstuvwxyz"
print(lexical_order("apple", "ample", alphabet))  # -> False
alphabet = "abcdefghijklmnopqrstuvwxyz"
print(lexical_order("app", "application", alphabet))  # -> True
alphabet = "abcdefghijklmnopqrstuvwxyz"
print(lexical_order("backs", "backdoor", alphabet))  # -> False
alphabet = "ghzstijbacdopnfklmeqrxyuvw"
print(lexical_order("zoo", "dinner", alphabet))  # -> True
alphabet = "ghzstijbacdopnfklmeqrxyuvw"
print(lexical_order("leaper", "leap", alphabet))  # -> False
alphabet = "ghzstijbacdopnfklmeqrxyuvw"
print(lexical_order("backs", "backdoor", alphabet))  # -> True
alphabet = "ghzstijbacdopnfklmeqrxyuvw"
print(lexical_order("semper", "semper", alphabet))  # -> True
