
# create linked list
# Write a function, createLinkedList, that takes in an array of values as an argument.
#  The function should create a
#  linked list containing each element of the array as the values of the nodes. The function
#  should return the head of the linked list.

class Node:
    def __init__(self, val):
        self.val = val
        self.next = None


def create_linked_list(values):
    if len(values) == 0:
        return None
    head = Node(values[0])
    curr = head
    for i in range(1, len(values)):
        new_node = Node(values[i])
        curr.next = new_node
        curr = new_node
    return head


def create_linked_list_recur(values):
    return create_linked_list_recur_exe(values, 0)


def create_linked_list_recur_exe(values, idx):
    if idx == len(values):
        return None
    head = Node(values[idx])
    head.next = create_linked_list_recur_exe(values, idx+1)
    return head


def print_list(head):
    curr = head
    while curr is not None:
        print(f'[{curr.val}|next]--->')
        curr = curr.next
    return


print_list(create_linked_list(["h", "e", "y"]))
print_list(create_linked_list_recur(["h", "e", "y"]))

# h -> e -> y
print_list(create_linked_list([1, 7, 1, 8]))
print_list(create_linked_list_recur([1, 7, 1, 8]))

# 1 -> 7 -> 1 -> 8
print_list(create_linked_list(["a"]))
print_list(create_linked_list_recur(["a"]))

# a
print_list(create_linked_list([]))
print_list(create_linked_list_recur([]))

# null
