# tree path finder
# Write a function, pathFinder, that takes in a pointer to the root of a binary tree
# and a target value. The function should return a pointer to a vector representing
# a path to the target value.

# Be sure to dynamically allocate the vector with new.

# If the target value is not present in the tree, then return nullptr;

# You may assume that the tree contains unique values.


class Node:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None


def path_finder(root, target):
    
    return 


def path_finder_r(root, target):
    
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

print(path_finder(a, 'e'))  # -> [ 'a', 'b', 'e' ]
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

print(path_finder(a, 'p'))  # -> None
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

print(path_finder(a, "c"))  # -> ['a', 'c']
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

print(path_finder(a, "h"))  # -> ['a', 'c', 'f', 'h']
x = Node("x")

#      x

print(path_finder(x, "x"))  # -> ['x']
print(path_finder(None, "x"))  # -> None
root = Node(0)
curr = root
for i in range(1, 19500):
    curr.right = Node(i)
    curr = curr.right

#      0
#       \
#        1
#         \
#          2
#           \
#            3
#             .
#              .
#               .
#              19498
#                \
#                19499

print(path_finder(root, 16281))  # -> [0, 1, 2, 3, ..., 16280, 16281]
