# detect dictionary
# Write a function, detectDictionary, that takes in a dictionary of words
#  and an alphabet string. The function should return a boolean indicating
#  whether or not all words of the dictionary are lexically-ordered
#  according to the alphabet.
# https://en.wikipedia.org/wiki/Lexicographic_order
# You can assume that all characters are lowercase a-z.

# You can assume that the alphabet contains all 26 letters.


def detect_dictionary(dictionary, alphabet):

    return True


def lexical_order(word_1, word_2, alphabet):

    return True


dictionary = ["zoo", "tick", "tack", "door"]
alphabet = "ghzstijbacdopnfklmeqrxyuvw"
print(detect_dictionary(dictionary, alphabet))  # -> True
dictionary = ["zoo", "tack", "tick", "door"]
alphabet = "ghzstijbacdopnfklmeqrxyuvw"
print(detect_dictionary(dictionary, alphabet))  # -> False
dictionary = ["zoos", "zoo", "tick", "tack", "door"]
alphabet = "ghzstijbacdopnfklmeqrxyuvw"
print(detect_dictionary(dictionary, alphabet))  # -> False
dictionary = ["miles", "milestone", "proper", "process", "goal"]
alphabet = "mnoijpqrshkltabcdefguvwzxy"
print(detect_dictionary(dictionary, alphabet))  # -> True
dictionary = ["miles", "milestone", "pint", "proper", "process", "goal"]
alphabet = "mnoijpqrshkltabcdefguvwzxy"
print(detect_dictionary(dictionary, alphabet))  # -> True
dictionary = ["miles", "milestone", "pint",
              "proper", "process", "goal", "apple"]
alphabet = "mnoijpqrshkltabcdefguvwzxy"
print(detect_dictionary(dictionary, alphabet))  # -> False
