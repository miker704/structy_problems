# linked list values
# Write a function, linked_list_values, that takes in the head of a linked list as an argument. 
# The function should return a list containing all values of the nodes in the linked list.

# Hey. This is our first linked list problem, so you should be liberal with 
# watching the Approach and Walkthrough. Be productive, not stubborn. -AZ

class Node:
    def __init__(self,value):
        self.value = value
        self.next = None


def linked_list_values(head):


    return 

def linked_list_values_recur(head):

    return 

def _linked_list_values_recur(curr,node_values):

    return 


a = Node("a")
b = Node("b")
c = Node("c")
d = Node("d")

a.next = b
b.next = c
c.next = d

# a -> b -> c -> d

print(linked_list_values(a)) # -> [ 'a', 'b', 'c', 'd' ]
print(linked_list_values_recur(a)) # -> [ 'a', 'b', 'c', 'd' ]

x = Node("x")
y = Node("y")

x.next = y

# x -> y

print(linked_list_values(x)) # -> [ 'x', 'y' ]
print(linked_list_values_recur(x)) # -> [ 'x', 'y' ]

q = Node("q")

# q

print(linked_list_values(q)) # -> [ 'q' ]
print(linked_list_values_recur(q)) # -> [ 'q' ]

print(linked_list_values(None)) # -> [ ]
print(linked_list_values_recur(None)) # -> [ ]
