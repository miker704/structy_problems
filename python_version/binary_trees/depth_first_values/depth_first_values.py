# depth first values
# Write a function, depthFirstValues, that takes in a pointer to the root of a binary tree.
#  The function should return a vector containing all values of the tree in depth-first order.

# Hey. This is our first binary tree problem, so you should be liberal with 
# watching the Approach and Walkthrough. Be productive, not stubborn. -AZ

class Node:
  def __init__(self, val):
    self.val = val
    self.left = None
    self.right = None

def depth_first_values(root):


    return 


def depth_first_values_recur(root):
    # return _depth_first_values_recur(root,[])
# def _depth_first_values_recur(root,array):

    return 

def print_dfs(array):
    for i in array:
        print(f'{i}')
    print("--------")




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

print_dfs(depth_first_values(a))
print_dfs(depth_first_values_recur(a))

#   -> ['a', 'b', 'd', 'e', 'c', 'f']
a = Node('a')
b = Node('b')
c = Node('c')
d = Node('d')
e = Node('e')
f = Node('f')
g = Node('g')
a.left = b
a.right = c
b.left = d
b.right = e
c.right = f
e.left = g

#      a
#    /   \
#   b     c
#  / \     \
# d   e     f
#    /
#   g

# depth_first_values(a)
print_dfs(depth_first_values(a))
print_dfs(depth_first_values_recur(a))
#   -> ['a', 'b', 'd', 'e', 'g', 'c', 'f']
a = Node('a')
#     a
# depth_first_values(a) 
print_dfs(depth_first_values(a))
print_dfs(depth_first_values_recur(a))
#   -> ['a']
a = Node('a')
b = Node('b')
c = Node('c')
d = Node('d')
e = Node('e')
a.right = b
b.left = c
c.right = d
d.right = e

#      a
#       \
#        b
#       /
#      c
#       \
#        d
#         \
#          e

# depth_first_values(a) 
print_dfs(depth_first_values(a))
print_dfs(depth_first_values_recur(a))
#   -> ['a', 'b', 'c', 'd', 'e']
# depth_first_values(None) 
print_dfs(depth_first_values(None))
print_dfs(depth_first_values_recur(None))
#   -> []