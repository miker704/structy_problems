# linked list find
# Write a function, linkedListFind, that takes in a pointer to the head of a linked list and a target value.
#  The function should return a boolean indicating whether or not the linked list contains the target.


class Node:
  def __init__(self, val):
    self.val = val
    self.next = None

def linked_list_find(head, target):

    return 

def linked_list_find_recur(head, target):
    return 
def _linked_list_find_recur(curr, target):

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
print(linked_list_find(a, "c")) # True
print("recursive")
print(linked_list_find_recur(a, "c")) #True

a = Node("a")
b = Node("b")
c = Node("c")
d = Node("d")

a.next = b
b.next = c
c.next = d

# a -> b -> c -> d
print("iterative")
print(linked_list_find(a, "d"))# True
print("recursive")
print(linked_list_find_recur(a, "d")) # True

a = Node("a")
b = Node("b")
c = Node("c")
d = Node("d")

a.next = b
b.next = c
c.next = d

# a -> b -> c -> d
print("iterative")
print(linked_list_find(a, "q"))# False
print("recursive")
print(linked_list_find_recur(a, "q"))# False


node1 = Node("jason")
node2 = Node("leneli")

node1.next = node2

# jason -> leneli
print("iterative")
print(linked_list_find(node1, "jason")) # True
print("recursive")
print(linked_list_find_recur(node1, "jason")) # True

node1 = Node(42)

# 42
print("iterative")
print(linked_list_find(node1, 42)) # True
print("recursive")
print(linked_list_find_recur(node1, 42)) # True

node1 = Node(42)

# 42
print("iterative")
print(linked_list_find(node1, 100)) # False
print("recursive")
print(linked_list_find_recur(node1, 100)) # False
