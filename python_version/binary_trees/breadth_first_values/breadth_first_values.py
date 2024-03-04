# breadth first values
# Write a function, breadthFirstValues, that takes in a pointer to the root of a binary tree. 
# The function should return a vector containing all values of the tree in breadth-first order.

class Node:
  def __init__(self, val):
    self.val = val
    self.left = None
    self.right = None

def breadth_first_values(root):

  return 




def print_bfs(array):
  for i in array:
    print(f'{i}')
  print("====")

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

print_bfs(breadth_first_values(a)) 
#    -> ['a', 'b', 'c', 'd', 'e', 'f']
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
f.right = h

#      a
#    /   \
#   b     c
#  / \     \
# d   e     f
#    /       \
#   g         h

print_bfs(breadth_first_values(a)) 
#   -> ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h']
a = Node('a')

#      a

print_bfs(breadth_first_values(a)) 
#    -> ['a']
a = Node('a')
b = Node('b')
c = Node('c')
d = Node('d')
e = Node('e')
x = Node('x')

a.right = b
b.left = c
c.left = x
c.right = d
d.right = e

#      a
#       \
#        b
#       /
#      c
#    /  \
#   x    d
#         \
#          e

print_bfs(breadth_first_values(a)) 
#    -> ['a', 'b', 'c', 'x', 'd', 'e']
print_bfs(breadth_first_values(None)) 
#    -> []