# zipper lists
# Write a function, zipperLists, that takes in pointers to the heads of two linked lists.
# The function should zipper the two lists together into single linked list by alternating nodes.
# If one of the linked lists is longer than the other, the resulting list should terminate with the remaining nodes.
#  The function should return a pointer to the head of the zippered linked list.

# Do this in-place, by mutating the original Nodes.

# You may assume that both input lists are non-empty.

class Node:
  def __init__(self, val):
    self.val = val
    self.next = None


def zipper_lists(head_1, head_2):



    return 


def zipper_lists_recur(head_1, head_2):
  return 1  # todo


def _zipper_lists_recur(head_1, head_2):
  return 1  # todo


def print_list(head):
    curr = head
    while curr is not None:
        print(f'[{curr.val}|next]--->')
        curr = curr.next
    return

a = Node("a")
b = Node("b")
c = Node("c")
a.next = b
b.next = c
# a -> b -> c

x = Node("x")
y = Node("y")
z = Node("z")
x.next = y
y.next = z
# x -> y -> z
print("iterative")
print_list(zipper_lists(a, x))

print("recursive")

# print_list(zipper_lists_recur(a, x))
# a -> x -> b -> y -> c -> z
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

x = Node("x")
y = Node("y")
z = Node("z")
x.next = y
y.next = z
# x -> y -> z
print("iterative")
print_list(zipper_lists(a, x))

print("recursive")
# print_list(zipper_lists_recur(a, x))
# a -> x -> b -> y -> c -> z -> d -> e -> f
s = Node("s")
t = Node("t")
s.next = t
# s -> t

one = Node(1)
two = Node(2)
three = Node(3)
four = Node(4)
one.next = two
two.next = three
three.next = four
# 1 -> 2 -> 3 -> 4
print("iterative")
print_list(zipper_lists(s, one))

print("recursive")
# print_list(zipper_lists_recur(s, one))
# s -> 1 -> t -> 2 -> 3 -> 4
w = Node("w")
# w

one = Node(1)
two = Node(2)
three = Node(3)
one.next = two
two.next = three
# 1 -> 2 -> 3 
print("iterative")
print_list(zipper_lists(w, one))

print("recursive")
# print_list(zipper_lists_recur(w, one))
# w -> 1 -> 2 -> 3
one = Node(1)
two = Node(2)
three = Node(3)
one.next = two
two.next = three
# 1 -> 2 -> 3 

w = Node("w")
# w
print("iterative")
print_list(zipper_lists(one, w))

print("recursive")
# print_list(zipper_lists_recur(one, w))
# 1 -> w -> 2 -> 3