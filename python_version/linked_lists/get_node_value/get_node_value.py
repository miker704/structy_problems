# get node value
# Write a function, getNodeValue, that takes in a pointer to the head of a linked list and an index. The function 
# should return the value of the linked list at the specified index.

# If there is no node at the given index, then return the empty string.

class Node:
  def __init__(self, val):
    self.val = val
    self.next = None

def get_node_value(head, index):
 
    return 

def get_node_value_recur(head, index):
    return 

def _get_node_value_recur(curr, index):

    return 


a = Node("a")
b = Node("b")
c = Node("c")
d = Node("d")

a.next = b
b.next = c
c.next = d

# a -> b -> c -> d

print("iterative")
print(get_node_value(a, 2)) # 'c'

print("recursive")
print(get_node_value_recur(a, 2)) # 'c'
a = Node("a")
b = Node("b")
c = Node("c")
d = Node("d")

a.next = b
b.next = c
c.next = d

# a -> b -> c -> d
print("iterative")
print(get_node_value(a, 3)) # 'd'

print("recursive")
print(get_node_value_recur(a, 3)) # 'd'
a = Node("a")
b = Node("b")
c = Node("c")
d = Node("d")

a.next = b
b.next = c
c.next = d

# a -> b -> c -> d
print("iterative")
print(get_node_value(a, 7)) # None

print("recursive")
print(get_node_value_recur(a, 7)) # None
node1 = Node("banana")
node2 = Node("mango")

node1.next = node2

# banana -> mango
print("iterative")
print(get_node_value(node1, 0)) # 'banana'

print("recursive")
print(get_node_value_recur(node1, 0)) # 'banana'

node1 = Node("banana")
node2 = Node("mango")

node1.next = node2

# banana -> mango
print("iterative")
print(get_node_value(node1, 1)) # 'mango'

print("recursive")
print(get_node_value_recur(node1, 1)) # 'mango'