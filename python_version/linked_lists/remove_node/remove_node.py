# remove node
# Write a function, removeNode, that takes in a pointer to the head of a linked list and a target value as arguments.
#  The function should delete the node containing the target value from the linked list
#  and return the head of the resulting linked list. If the target appears multiple times
#   in the linked list, only remove the first instance of the target in the list.

# Do this in-place. You do not need to dynamically deallocate the memory with delete,
# just reassign next pointers correctly.

# You may assume that the input list is non-empty.

# You may assume that the input list contains the target.


class Node:
    def __init__(self, val):
        self.val = val
        self.next = None


def remove_node(head, target_val):
    if head.val == target_val:
        return head.next
    curr = head
    new_head = head
    prev = None
    while curr is not None:
        if curr.val == target_val:
            prev.next = curr.next
            curr = None
            break
        prev = curr
        curr = curr.next
    return new_head


def remove_node_recur(head, target_val):
    if head is None:
        return None
    if head.val == target_val:
        return head.next
    head.next = remove_node_recur(head.next, target_val)
    return head



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
e = Node("e")
f = Node("f")

a.next = b
b.next = c
c.next = d
d.next = e
e.next = f

# a -> b -> c -> d -> e -> f

print_list(remove_node(a, "c"))
a.next = b
b.next = c
c.next = d
d.next = e
e.next = f
print_list(remove_node_recur(a, "c"))

# a -> b -> d -> e -> f
x = Node("x")
y = Node("y")
z = Node("z")

x.next = y
y.next = z

# x -> y -> z

print_list(remove_node(x, "z"))
x.next = y
y.next = z
print_list(remove_node_recur(x, "z"))

# x -> y
q = Node("q")
r = Node("r")
s = Node("s")

q.next = r
r.next = s

# q -> r -> s

print_list(remove_node(q, "q"))
q.next = r
r.next = s
print_list(remove_node_recur(q, "q"))

# r -> s
node1 = Node("h")
node2 = Node("i")
node3 = Node("j")
node4 = Node("i")

node1.next = node2
node2.next = node3
node3.next = node4

# h -> i -> j -> i

print_list(remove_node(node1, "i"))
node1.next = node2
node2.next = node3
node3.next = node4
print_list(remove_node_recur(node1, "i"))

# h -> j -> i
t = Node("t")

# t

print_list(remove_node(t, "t"))
print_list(remove_node_recur(t, "t"))


# None
