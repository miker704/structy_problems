# build tree in post
# Write a function, build_tree_in_post,
# that takes in a list of in-ordered values and a list
#  of post-ordered values for a binary tree. The function should build
#   a binary tree that has the given in-order and post-order traversal
#   structure. The function should return the root of this tree.

# You can assume that the values of inorder and postorder are unique.


class Node:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None


def build_tree_in_post(in_order, post_order):

    return


def inorder_print(root):
    if root is None:
        return []
    left = inorder_print(root.left)
    right = inorder_print(root.right)
    return [*left, root.val, *right]


print(inorder_print(build_tree_in_post(
    ['y', 'x', 'z'],
    ['y', 'z', 'x']
)))
#       x
#    /    \
#   y      z
print(inorder_print(build_tree_in_post(
    ['d', 'b', 'e', 'a', 'f', 'c', 'g'],
    ['d', 'e', 'b', 'f', 'g', 'c', 'a']
)))
#      a
#    /    \
#   b      c
#  / \    / \
# d   e  f   g
print(inorder_print(build_tree_in_post(
    ['d', 'b', 'g', 'e', 'h', 'a', 'c', 'f'],
    ['d', 'g', 'h', 'e', 'b', 'f', 'c', 'a']
)))
#      a
#    /    \
#   b      c
#  / \      \
# d   e      f
#    / \
#    g  h
print(inorder_print(build_tree_in_post(
    ['m', 'n'],
    ['m', 'n']
)))
#       n
#     /
#    m
print(inorder_print(build_tree_in_post(
    ['n', 'm'],
    ['m', 'n']
)))
#     n
#      \
#       m
