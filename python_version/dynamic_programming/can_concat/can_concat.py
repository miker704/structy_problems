# can concat
# Write a function, canConcat, that takes in a string and an array of words as arguments.
#  The function should return boolean indicating whether or not it is possible
#   to concatenate words of the array together to form the string.

# You may reuse words of the array as many times as needed.


def can_concat(s, words):
    return


def _can_concat(s, words, progress):

    return 


print(can_concat("oneisnone", ["one", "none", "is"]))  # -> True
print(can_concat("oneisnone", ["on", "e", "is"]))  # -> False
print(can_concat("oneisnone", ["on", "e", "is", "n"]))  # -> True
print(can_concat("foodisgood", ["is", "g", "ood", "f"]))  # -> True
print(can_concat("santahat", ["santah", "hat"]))  # -> False
print(can_concat("santahat", ["santah", "san", "hat", "tahat"]))  # -> True
print(can_concat("rrrrrrrrrrrrrrrrrrrrrrrrrrx", [
      "r", "rr", "rrr", "rrrr", "rrrrr", "rrrrrr"]))  # -> False
print(can_concat("fooisgood", ["foo", "is", "g", "ood", "f"]))  # -> True
