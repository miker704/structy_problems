# lowest common ancestor
# Write a function, lowestCommonAncestor, that takes in the root of
# a binary tree and two values. The function should return the value
# of the lowest common ancestor of the two values in the tree.

# You may assume that the tree values are unique and the tree is non-empty.

# Note that a node may be considered an ancestor of itself.


class Node:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None


def lowest_common_ancestor(root, val1, val2):

            return 


def get_path(root, val):

    return None


a = Node('a')
b = Node('b')
c = Node('c')
d = Node('d')
e = Node('e')
f = Node('f')
g = Node('g')
h = Node('h')

a.left = b
a.right = c
b.left = d
b.right = e
c.right = f
e.left = g
e.right = h

#      a
#    /    \
#   b      c
#  / \      \
# d   e      f
#    / \
#    g  h
print(lowest_common_ancestor(a, 'd', 'h'))  # b
print(lowest_common_ancestor(a, 'd', 'g'))  # b
print(lowest_common_ancestor(a, 'g', 'c'))  # a
print(lowest_common_ancestor(a, 'b', 'g'))  # b
print(lowest_common_ancestor(a, 'f', 'c'))  # c
# example tree
l = Node('l')
m = Node('m')
n = Node('n')
o = Node('o')
p = Node('p')
q = Node('q')
r = Node('r')
s = Node('s')
t = Node('t')

l.left = m
l.right = n
n.left = o
n.right = p
o.left = q
o.right = r
p.left = s
p.right = t

#        l
#     /     \
#    m       n
#         /    \
#         o     p
#        / \   / \
#       q   r s   t
print(lowest_common_ancestor(l, 'r', 'p'))  # n
print(lowest_common_ancestor(l, 'm', 'o'))  # l
print(lowest_common_ancestor(l, 't', 'q'))  # n
print(lowest_common_ancestor(l, 's', 'p'))  # p
