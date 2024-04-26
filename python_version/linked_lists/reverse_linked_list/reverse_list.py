# reverse list
# Write a function, reverseList, that takes in a pointer to the head of a linked list as an argument. 
# The function should reverse the order of the nodes in the linked list 
# in-place and return the new head of the reversed linked list.

class Node:
  def __init__(self, val):
    self.val = val
    self.next = None

def reverse_list(head):
    curr = head
    prev = None
    while curr is not None:
        next_node = curr.next
        curr.next = prev
        prev = curr
        curr = next_node
    head = prev
    return head

def reverse_list_recur(head):
    curr = head
    prev = None
    return _reverse_list_recur(head,curr,prev)
def _reverse_list_recur(head,curr,prev):
    if curr == None:
        head = prev
        return head
    next_node = curr.next
    curr.next = prev
    prev = curr
    curr = next_node

    return _reverse_list_recur(head,curr,prev)

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

print("iterative")
print("list before")
print_list(a)
print("list reversed")
print_list(reverse_list(a)) # f -> e -> d -> c -> b -> a
print("recursive")
print_list(reverse_list_recur(f)) # f -> e -> d -> c -> b -> a

x = Node("x")
y = Node("y")

x.next = y

# x -> y
print("iterative")
print("list before")

print_list(x)

print("list reversed")
print_list(reverse_list(x)) # y -> x
print("recursive")
print_list(reverse_list_recur(y)) # y -> x

p = Node("p")

# p
print("iterative")
print("list before")
print_list(p)
print("list reversed")

print_list(reverse_list(p)) # p
print("recursive")
print_list(reverse_list_recur(p)) # p
