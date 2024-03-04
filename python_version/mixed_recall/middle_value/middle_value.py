# middle value
# Write a function, middleValue,
# that takes in the head of a linked list as an argument.
# The function should return the value of the middle node in the linked list.
# If the linked list has an even number of nodes, then return the value of the second middle node.

# You may assume that the input list is non-empty.


class Node:
    def __init__(self, val):
        self.val = val
        self.next = None

# n = number of nodes
# Time: O(n)
# Space: O(1)


def middle_value_dual_pointers(head):

    return 


# n = number of nodes
# Time: O(n)
# Space: O(n)
def middle_value_array(head):

    return


a = Node('a')
b = Node('b')
c = Node('c')
d = Node('d')
e = Node('e')

a.next = b
b.next = c
c.next = d
d.next = e

# a -> b -> c -> d -> e
print(middle_value_array(a))  # c
print(middle_value_dual_pointers(a))  # c

a = Node('a')
b = Node('b')
c = Node('c')
d = Node('d')
e = Node('e')
f = Node('f')

a.next = b
b.next = c
c.next = d
d.next = e
e.next = f

# a -> b -> c -> d -> e -> f
print(middle_value_array(a))  # d
print(middle_value_dual_pointers(a))  # d

x = Node('x')
y = Node('y')
z = Node('z')

x.next = y
y.next = z

# x -> y -> z
print(middle_value_array(x))  # y
print(middle_value_dual_pointers(x))  # y

x = Node('x')
y = Node('y')

x.next = y

# x -> y
print(middle_value_array(x))  # y
print(middle_value_dual_pointers(x))  # y

q = Node('q')

# q
print(middle_value_array(q))  # q
print(middle_value_dual_pointers(q))  # q
