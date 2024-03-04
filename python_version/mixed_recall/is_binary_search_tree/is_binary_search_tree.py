# is binary search tree
# Write a function, isBinarySearchTree,
# that takes in the root of a binary tree. The function should return a boolean
#  indicating whether or not the tree satisfies the binary search tree property.

# A Binary Search Tree is a binary tree where all values within a node's left
# subtree are smaller than the node's value and all values in a node's right
# subtree are greater than or equal to the node's value.
# https://en.wikipedia.org/wiki/Binary_search_tree


class Node:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None


def is_binary_search_tree(root):

    return


def inorder_traversal(root):

    return 


def is_sorted(values):

    return 


a = Node(12)
b = Node(5)
c = Node(18)
d = Node(3)
e = Node(9)
f = Node(19)

a.left = b
a.right = c
b.left = d
b.right = e
c.right = f

#      12
#    /   \
#   5     18
#  / \     \
# 3   9     19

print(is_binary_search_tree(a))  # -> True
a = Node(12)
b = Node(5)
c = Node(18)
d = Node(3)
e = Node(15)
f = Node(19)

a.left = b
a.right = c
b.left = d
b.right = e
c.right = f

#      12
#    /   \
#   5     18
#  / \     \
# 3   15     19

print(is_binary_search_tree(a))  # -> False
a = Node(12)
b = Node(5)
c = Node(19)
d = Node(3)
e = Node(9)
f = Node(19)

a.left = b
a.right = c
b.left = d
b.right = e
c.right = f

#      12
#    /   \
#   5     19
#  / \     \
# 3   9     19

print(is_binary_search_tree(a))  # -> True
a = Node(12)
b = Node(5)
c = Node(10)
d = Node(3)
e = Node(9)
f = Node(19)

a.left = b
a.right = c
b.left = d
b.right = e
c.right = f

#      12
#    /   \
#   5     10
#  / \     \
# 3   9     19

print(is_binary_search_tree(a))  # -> False
q = Node(54)
r = Node(42)
s = Node(70)
t = Node(31)
u = Node(50)
v = Node(72)
w = Node(47)
x = Node(90)

q.left = r
q.right = s
r.left = t
r.right = u
s.right = v
u.left = w
v.right = x

#       54
#     /    \
#    42     70
#   / \      \
# 31   50     72
#     /        \
#    47         90

print(is_binary_search_tree(q))  # -> True
