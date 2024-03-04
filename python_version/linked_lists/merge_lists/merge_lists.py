# merge lists
# Write a function, mergeLists, that takes in pointers to the heads of two sorted linked lists.
#  The function should merge the two lists together into single sorted linked list.
#  The function should return a pointer to the head of the merged linked list.

# Do this in-place, by mutating the original Nodes.

# You may assume that both input lists are non-empty and contain increasing sorted numbers.


class Node:
    def __init__(self, val):
        self.val = val
        self.next = None


def merge_lists(head_1, head_2):


    return 


def merge_lists_recur(head_1, head_2):

    
        return 


def print_list(head):
    curr = head
    while curr is not None:
        print(f'[{curr.val}|next]--->')
        curr = curr.next
    return


a = Node(5)
b = Node(7)
c = Node(10)
d = Node(12)
e = Node(20)
f = Node(28)
a.next = b
b.next = c
c.next = d
d.next = e
e.next = f
# 5 -> 7 -> 10 -> 12 -> 20 -> 28

q = Node(6)
r = Node(8)
s = Node(9)
t = Node(25)
q.next = r
r.next = s
s.next = t
# 6 -> 8 -> 9 -> 25

print_list(merge_lists(a, q))
a.next = b
b.next = c
c.next = d
d.next = e
e.next = f
q.next = r
r.next = s
s.next = t
t.next = None
print_list(merge_lists_recur(a, q))

# 5 -> 6 -> 7 -> 8 -> 9 -> 10 -> 12 -> 20 -> 25 -> 28
a = Node(5)
b = Node(7)
c = Node(10)
d = Node(12)
e = Node(20)
f = Node(28)
a.next = b
b.next = c
c.next = d
d.next = e
e.next = f
# 5 -> 7 -> 10 -> 12 -> 20 -> 28

q = Node(1)
r = Node(8)
s = Node(9)
t = Node(10)
q.next = r
r.next = s
s.next = t
# 1 -> 8 -> 9 -> 10

print_list(merge_lists(a, q))
a.next = b
b.next = c
c.next = d
d.next = e
e.next = f
f.next = None

q.next = r
r.next = s
s.next = t
t.next = None

print_list(merge_lists_recur(a, q))

# 1 -> 5 -> 7 -> 8 -> 9 -> 10 -> 10 -> 12 -> 20 -> 28
h = Node(30)
# 30

p = Node(15)
q = Node(67)
p.next = q
# 15 -> 67

print_list(merge_lists(h, p))
h.next = None
p.next = q
print_list(merge_lists_recur(h, p))

# 15 -> 30 -> 67
