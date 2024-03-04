# binary search tree includes
# Write a function, binarySearchTreeIncludes, that takes in the root of a binary search tree
# containing numbers and a target value. The function should return a boolean indicating whether
#  or not the target is found within the tree.

# A Binary Search Tree is a binary tree where all values within a node's left subtree are smaller
#  than the node's value and all values in a node's right subtree are greater than or equal to the node's value.
# https://en.wikipedia.org/wiki/Binary_search_tree
# Your solution should have a best case runtime of O(log(n)).


class Node:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None


def binary_search_tree_includes(root, target):

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
print(binary_search_tree_includes(a, 9))  # -> True
print(binary_search_tree_includes(a, 15))  # -> False
print(binary_search_tree_includes(a, 1))  # -> False
print(binary_search_tree_includes(a, 12))  # -> True
# tree q
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
print(binary_search_tree_includes(q, 55))  # -> False
print(binary_search_tree_includes(q, 47))  # -> True
print(binary_search_tree_includes(q, 49))  # -> False
print(binary_search_tree_includes(q, 70))  # -> True
print(binary_search_tree_includes(q, 100))  # -> False
