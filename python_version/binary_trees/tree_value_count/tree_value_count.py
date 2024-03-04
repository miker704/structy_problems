
# tree value count
# Write a function, treeValueCount, that takes in the root of a binary tree and a target value.
# The function should return the number of times that the target occurs in the tree.

from collections import deque


class Node:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None


def tree_value_count(root, target):

    return 

# breadth first


def tree_value_count_B(root, target):

    return 


a = Node(12)
b = Node(6)
c = Node(6)
d = Node(4)
e = Node(6)
f = Node(12)

a.left = b
a.right = c
b.left = d
b.right = e
c.right = f

#      12
#    /   \
#   6     6
#  / \     \
# 4   6     12

print(tree_value_count(a,  6))  # -> 3
print(tree_value_count_B(a,  6))  # -> 3

a = Node(12)
b = Node(6)
c = Node(6)
d = Node(4)
e = Node(6)
f = Node(12)

a.left = b
a.right = c
b.left = d
b.right = e
c.right = f

#      12
#    /   \
#   6     6
#  / \     \
# 4  6     12

print(tree_value_count(a,  12))  # -> 2
print(tree_value_count_B(a,  12))  # -> 2

a = Node(7)
b = Node(5)
c = Node(1)
d = Node(1)
e = Node(8)
f = Node(7)
g = Node(1)
h = Node(1)

a.left = b
a.right = c
b.left = d
b.right = e
c.right = f
e.left = g
f.right = h

#      7
#    /   \
#   5     1
#  / \     \
# 1   8     7
#    /       \
#   1         1

print(tree_value_count(a, 1))  # -> 4
print(tree_value_count_B(a, 1))  # -> 4

a = Node(7)
b = Node(5)
c = Node(1)
d = Node(1)
e = Node(8)
f = Node(7)
g = Node(1)
h = Node(1)

a.left = b
a.right = c
b.left = d
b.right = e
c.right = f
e.left = g
f.right = h

#      7
#    /   \
#   5     1
#  / \     \
# 1   8     7
#    /       \
#   1         1

print(tree_value_count(a, 9))  # -> 0
print(tree_value_count_B(a, 9))  # -> 0
print(tree_value_count(None, 42))  # -> 0
print(tree_value_count_B(None, 42))  # -> 0
