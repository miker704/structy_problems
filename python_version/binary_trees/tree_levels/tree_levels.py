# tree levels
# Write a function,
# treeLevels, that takes in a pointer to the root of a binary tree.
# The function should return a 2-Dimensional vector where each subvector represents a level of the tree.

from collections import deque


class Node:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None


def tree_levels(root):
    
    return 


def _tree_levels(root, levels, level_num):

    return 


def tree_levels_breadth(root):

    return 


a = Node('a')
b = Node('b')
c = Node('c')
d = Node('d')
e = Node('e')
f = Node('f')

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

print(tree_levels(a))  # ->
print(tree_levels_breadth(a))  # ->

# [
#   ['a'],
#   ['b', 'c'],
#   ['d', 'e', 'f']
# ]
a = Node('a')
b = Node('b')
c = Node('c')
d = Node('d')
e = Node('e')
f = Node('f')
g = Node('g')
h = Node('h')
i = Node('i')

a.left = b
a.right = c
b.left = d
b.right = e
c.right = f
e.left = g
e.right = h
f.left = i

#         a
#      /    \
#     b      c
#   /  \      \
#  d    e      f
#      / \    /
#     g  h   i

print(tree_levels(a))  # ->
print(tree_levels_breadth(a))  # ->

# [
#   ['a'],
#   ['b', 'c'],
#   ['d', 'e', 'f'],
#   ['g', 'h', 'i']
# ]
q = Node('q')
r = Node('r')
s = Node('s')
t = Node('t')
u = Node('u')
v = Node('v')

q.left = r
q.right = s
r.right = t
t.left = u
u.right = v

#      q
#    /   \
#   r     s
#    \
#     t
#    /
#   u
#  /
# v

print(tree_levels(q))  # ->
print(tree_levels_breadth(q))  # ->

# [
#   ['q'],
#   ['r', 's'],
#   ['t'],
#   ['u'],
#   ['v']
# ]
print(tree_levels(None))  # -> []
print(tree_levels_breadth(None))  # -> []
