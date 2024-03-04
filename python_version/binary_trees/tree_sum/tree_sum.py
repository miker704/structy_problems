# tree sum
# Write a function, treeSum, that takes in a pointer to the root of a binary tree
# that contains number values. The function should return the total sum of all values in the tree.
from collections import deque

class Node:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None


# def tree_sum(root):
#     if root == None:
#         return 0
#     tree_sum_total = 0
#     array = [root]
#     while len(array) != 0:
#         curr = array[0]
#         tree_sum_total += curr.val
#         array.pop(0)
#         if curr.left is not None:
#             array.append(curr.left)
#         if curr.right is not None:
#             array.append(curr.right)

#     return tree_sum_total


#alternative using deque data structure from python collections libary 
def tree_sum(root):

  return 



def tree_sum_recur(root):
  
    return 


a = Node(3)
b = Node(11)
c = Node(4)
d = Node(4)
e = Node(-2)
f = Node(1)

a.left = b
a.right = c
b.left = d
b.right = e
c.right = f

#       3
#    /    \
#   11     4
#  / \      \
# 4   -2     1

print(tree_sum(a))  # -> 21
print(tree_sum_recur(a))  # -> 21

a = Node(1)
b = Node(6)
c = Node(0)
d = Node(3)
e = Node(-6)
f = Node(2)
g = Node(2)
h = Node(2)

a.left = b
a.right = c
b.left = d
b.right = e
c.right = f
e.left = g
f.right = h

#      1
#    /   \
#   6     0
#  / \     \
# 3   -6    2
#    /       \
#   2         2

print(tree_sum(a))  # -> 10
print(tree_sum_recur(a))  # -> 10

print(tree_sum(None))  # -> 0
print(tree_sum_recur(None))  # -> 0
