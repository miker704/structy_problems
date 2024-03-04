# insert node
# Write a function, insertNode, that takes in a pointer to the head of a linked list,
# a value, and an index. The function should insert a new node with the value into the
# list at the specified index. Consider the head of the linked list as index 0. The
# function should return the head of the resulting linked list.

# Do this in-place and be sure to dynamically allocate the new node in memory using new.

# You may assume that the input list is non-empty and the index is not greater
#  than the length of the input list.


class Node:
    def __init__(self, val):
        self.val = val
        self.next = None


def insert_node(head, value, index):

    return 


def insert_node_recur(head, value, index):

    return 


def print_list(head):
    curr = head
    while curr is not None:
        print(f'[{curr.val}|next]--->')
        curr = curr.next
    return


a = Node("a")
b = Node("b")
c = Node("c")
d = Node("d")

a.next = b
b.next = c
c.next = d

# a -> b -> c -> d

print_list(insert_node(a, 'x', 2))
a.next = b
b.next = c
c.next = d

print_list(insert_node_recur(a, 'x', 2))

# a -> b -> x -> c -> d
a = Node("a")
b = Node("b")
c = Node("c")
d = Node("d")

a.next = b
b.next = c
c.next = d

# a -> b -> c -> d

print_list(insert_node(a, 'v', 3))
a.next = b
b.next = c
c.next = d
print_list(insert_node_recur(a, 'v', 3))

# a -> b -> c -> v -> d
a = Node("a")
b = Node("b")
c = Node("c")
d = Node("d")

a.next = b
b.next = c
c.next = d

# a -> b -> c -> d

print_list(insert_node(a, 'm', 4))
a = Node("a")
b = Node("b")
c = Node("c")
d = Node("d")
a.next = b
b.next = c
c.next = d
print_list(insert_node_recur(a, 'm', 4))

# a -> b -> c -> d -> m
a = Node("a")
b = Node("b")

a.next = b

# a -> b

print_list(insert_node(a, 'z', 0))
a = Node("a")
b = Node("b")

a.next = b
print_list(insert_node_recur(a, 'z', 0))

# z -> a -> b
