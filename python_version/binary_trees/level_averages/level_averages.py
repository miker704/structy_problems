# level averages
# Write a function,
# levelAverages, that takes in a pointer to the root of a binary tree that
#  contains number values. The function should return a vector containing the average
#   value of each level.

from collections import deque


class Node:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None


def level_averages(root):

    return 


def _level_averages(root, levels, level_num):
    
    return 


def calc_avg(sub_array):

    return 


a = Node(3)
b = Node(11)
c = Node(4)
d = Node(4)
e = Node(-2)
f = Node(1)

a.left = b
a.right = c
b.left = d
b.right = e
c.right = f

#       3
#    /    \
#   11     4
#  / \      \
# 4   -2     1

print(level_averages(a))  # -> [ 3, 7.5, 1 ]
a = Node(5)
b = Node(11)
c = Node(54)
d = Node(20)
e = Node(15)
f = Node(1)
g = Node(3)

a.left = b
a.right = c
b.left = d
b.right = e
e.left = f
e.right = g

#        5
#     /    \
#    11    54
#  /   \
# 20   15
#      / \
#     1  3

print(level_averages(a))  # -> [ 5, 32.5, 17.5, 2 ]
a = Node(-1)
b = Node(-6)
c = Node(-5)
d = Node(-3)
e = Node(0)
f = Node(45)
g = Node(-1)
h = Node(-2)

a.left = b
a.right = c
b.left = d
b.right = e
c.right = f
e.left = g
f.right = h

#        -1
#      /   \
#    -6    -5
#   /  \     \
# -3   0     45
#     /       \
#    -1       -2

print(level_averages(a))  # -> [ -1, -5.5, 14, -1.5 ]
q = Node(13)
r = Node(4)
s = Node(2)
t = Node(9)
u = Node(2)
v = Node(42)

q.left = r
q.right = s
r.right = t
t.left = u
u.right = v

#        13
#      /   \
#     4     2
#      \
#       9
#      /
#     2
#    /
#   42

print(level_averages(q))  # -> [ 13, 3, 9, 2, 42 ]
print(level_averages(None))  # -> [ ]
