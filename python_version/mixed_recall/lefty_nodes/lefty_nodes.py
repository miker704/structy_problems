# lefty nodes
# Write a function, leftyNodes, that takes in the root of a binary tree.
#  The function should return an vector containing the left-most value on every
#  level of the tree. The vector must be ordered in a top-down fashion where the
#   root is the first element.

# Note that the left-most node on a level may not necessarily be a left child.

class Node:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None


def lefty_nodes(root):
    
    return 


def _lefty_nodes(root, level, values):

    return 


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

print(lefty_nodes(a))  # [ 'a', 'b', 'd', 'g' ]
u = Node('u')
t = Node('t')
s = Node('s')
r = Node('r')
q = Node('q')
p = Node('p')

u.left = t
u.right = s
s.right = r
r.left = q
r.right = p

#     u
#  /    \
# t      s
#         \
#         r
#        / \
#        q  p

print(lefty_nodes(u))  # [ 'u', 't', 'r', 'q' ]
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

print(lefty_nodes(l))  # [ 'l', 'm', 'o', 'q' ]
n = Node('n')
y = Node('y')
c = Node('c')

n.left = y
n.right = c

#       n
#     /   \
#    y     c

print(lefty_nodes(n))  # [ 'n', 'y' ]
i = Node('i')
n = Node('n')
s = Node('s')
t = Node('t')

i.right = n
n.left = s
n.right = t

#       i
#        \
#         n
#        / \
#       s   t

print(lefty_nodes(i))  # [ 'i', 'n', 's' ]
print(lefty_nodes(None))  # [ ]
