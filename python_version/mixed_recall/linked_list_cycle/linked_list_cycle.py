
# linked list cycle
# Write a function, linked_list_cycle, that takes
#  in the head of a linked list as an argument.
#   The function should return a boolean indicating whether
#    or not the linked list contains a cycle.


class Node:
    def __init__(self, val):
        self.val = val
        self.next = None

# n = number of nodes
# Time: O(n)
# Space: O(1)


def linked_list_cycle_dual_pointers(head):


    return


# n = number of nodes
# Time: O(n)
# Space: O(n)
def linked_list_cycle_set(head):

    return 


a = Node('a')
b = Node('b')
c = Node('c')
d = Node('d')

a.next = b
b.next = c
c.next = d
d.next = b  # cycle

#         _______
#       /        \
# a -> b -> c -> d

print(linked_list_cycle_set(a))  # True
print(linked_list_cycle_dual_pointers(a))  # True

q = Node('q')
r = Node('r')
s = Node('s')
t = Node('t')
u = Node('u')

q.next = r
r.next = s
s.next = t
t.next = u
u.next = q  # cycle

#    ________________
#  /                 \
# q -> r -> s -> t -> u

print(linked_list_cycle_set(q))  # True
print(linked_list_cycle_dual_pointers(q))  # True

a = Node('a')
b = Node('b')
c = Node('c')
d = Node('d')

a.next = b
b.next = c
c.next = d

# a -> b -> c -> d

print(linked_list_cycle_set(a))  # False
print(linked_list_cycle_dual_pointers(a))  # False

q = Node('q')
r = Node('r')
s = Node('s')
t = Node('t')
u = Node('u')

q.next = r
r.next = s
s.next = t
t.next = u
u.next = t  # cycle

#                   __
#                 /   \
# q -> r -> s -> t -> u

print(linked_list_cycle_set(q))  # True
print(linked_list_cycle_dual_pointers(q))  # True

p = Node('p')

# p

print(linked_list_cycle_set(p))  # False
print(linked_list_cycle_dual_pointers(p))  # False

print(linked_list_cycle_set(None))  # False
print(linked_list_cycle_dual_pointers(None))  # False
