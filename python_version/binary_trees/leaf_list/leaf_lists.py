# leaf list
# Write a function, leafList, that takes in the root of a binary tree
# and returns an array containing the values of all leaf nodes in left-to-right order.

class Node:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None


def leaf_list(root):

    return 


def _leaf_list(root, vec):

    return 


def leaf_list_depth_first_iter(root):

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

print(leaf_list(a))  # -> [ 'd', 'e', 'f' ]
print(leaf_list_depth_first_iter(a))  # -> [ 'd', 'e', 'f' ]

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

print(leaf_list(a))  # -> [ 'd', 'g', 'h' ]
print(leaf_list_depth_first_iter(a))  # -> [ 'd', 'g', 'h' ]

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

print(leaf_list(a))  # -> [ 20, 1, 3, 54 ]
print(leaf_list_depth_first_iter(a))  # -> [ 20, 1, 3, 54 ]

x = Node('x')

#      x

print(leaf_list(x))  # -> [ 'x' ]
print(leaf_list_depth_first_iter(x))  # -> [ 'x' ]

print(leaf_list(None))  # -> [ ]
print(leaf_list_depth_first_iter(None))  # -> [ ]
