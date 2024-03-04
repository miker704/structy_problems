# tree includes
# Write a function, treeIncludes, that takes in a pointer to the root of a binary tree and a target value.
# The function should return a boolean indicating whether or not the value is contained in the tree.
from collections import deque

class Node:
  def __init__(self, val):
    self.val = val
    self.left = None
    self.right = None

#algo is different because we are using strings as values

def tree_includes(root, target):

  return 


def tree_includes_recur(root, target):

  return


a = Node("a")
b = Node("b")
c = Node("c")
d = Node("d")
e = Node("e")
f = Node("f")

a.left = b
a.right = c
b.left = d
b.right = e
c.right = f

#      a
#    /   \
#   b     c
#  / \     \
# d   e     f

print(tree_includes(a, "e")) # -> True
print(tree_includes_recur(a, "e")) # -> True

a = Node("a")
b = Node("b")
c = Node("c")
d = Node("d")
e = Node("e")
f = Node("f")

a.left = b
a.right = c
b.left = d
b.right = e
c.right = f

#      a
#    /   \
#   b     c
#  / \     \
# d   e     f
print(tree_includes(a, "a")) # -> True
print(tree_includes_recur(a, "a")) # -> True

a = Node("a")
b = Node("b")
c = Node("c")
d = Node("d")
e = Node("e")
f = Node("f")

a.left = b
a.right = c
b.left = d
b.right = e
c.right = f

#      a
#    /   \
#   b     c
#  / \     \
# d   e     f

print(tree_includes(a, "n")) # -> False
print(tree_includes_recur(a, "n")) # -> False

a = Node("a")
b = Node("b")
c = Node("c")
d = Node("d")
e = Node("e")
f = Node("f")
g = Node("g")
h = Node("h")

a.left = b
a.right = c
b.left = d
b.right = e
c.right = f
e.left = g
f.right = h

#      a
#    /   \
#   b     c
#  / \     \
# d   e     f
#    /       \
#   g         h

print(tree_includes(a, "f")) # -> True
print(tree_includes_recur(a, "f")) # -> True

a = Node("a")
b = Node("b")
c = Node("c")
d = Node("d")
e = Node("e")
f = Node("f")
g = Node("g")
h = Node("h")

a.left = b
a.right = c
b.left = d
b.right = e
c.right = f
e.left = g
f.right = h

#      a
#    /   \
#   b     c
#  / \     \
# d   e     f
#    /       \
#   g         h

print(tree_includes(a, "p")) # -> False
print(tree_includes_recur(a, "p")) # -> False

print(tree_includes(None, "b")) # -> False
print(tree_includes_recur(None, "b")) # -> False
