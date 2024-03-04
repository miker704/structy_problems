# build tree in pre
# Write a function, buildTreeInPre, that takes in a vector of in-ordered values
#  and a vector of pre-ordered values for a binary tree. The function should build
#  a binary tree that has the given in-order and pre-order traversal structure.
#  The function should return the root of this tree.

# You can assume that the values of inorder and preorder are unique.

# Be sure to allocate the nodes of your tree dynamically with the new keyword.


class Node:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None


def build_tree_in_pre(in_order, pre_order):

    return 


def inorder_print(root):
    if root is None:
        return []
    left = inorder_print(root.left)
    right = inorder_print(root.right)
    return [*left, root.val, *right]


print(inorder_print(build_tree_in_pre(
    ['z', 'y', 'x'],
    ['y', 'z', 'x']
)))
#       y
#    /    \
#   z      x
print(inorder_print(build_tree_in_pre(
    ['y', 'z', 'x'],
    ['y', 'x', 'z']
)))
#       y
#        \
#         x
#        /
#       z
print(inorder_print(build_tree_in_pre(
    ['d', 'b', 'g', 'e', 'h', 'a', 'c', 'f'],
    ['a', 'b', 'd', 'e', 'g', 'h', 'c', 'f']
)))
#       a
#    /    \
#   b      c
#  / \      \
# d   e      f
#    / \
#    g  h
print(inorder_print(build_tree_in_pre(
    ['t', 'u', 's', 'q', 'r', 'p'],
    ['u', 't', 's', 'r', 'q', 'p']
)))
#     u
#  /    \
# t      s
#         \
#         r
#        / \
#        q  p
print(inorder_print(build_tree_in_pre(
    ['m', 'l', 'q', 'o', 'r', 'n', 's', 'p', 't'],
    ['l', 'm', 'n', 'o', 'q', 'r', 'p', 's', 't']
)))
#        l
#     /     \
#    m       n
#         /    \
#         o     p
#        / \   / \
#       q   r s   t
